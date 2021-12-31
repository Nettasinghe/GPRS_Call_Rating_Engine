

///////////////////////////////////////////////////////////////////////////////////
//
// Telco Call Rating Engine for GPRS service – 
// The function of a Call Rating Engine is to rate or charge (give a monitory value)
// to a particular Call Detail Record (CDR) depending on various parameters such as 
// the rating plan of the customer and the time zone(peak / off peak) etc. 
// Telco Call Rating Engine for GPRS service is a rate rule based (by picking up the
// best matched rate rule from a rule base using a weightage based algorithm).
//
////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////
//
//  Project		: GSM GPRS Call Rating and Rerating
//  File		: main.cpp 
//  Description : main() method contains here 
//  Date		: 02 Jan 2002 
//  Developer	: Chandika Nettasinghe 
//
///////////////////////////////////////////////////

#include "defines.h"
#include "Ticket.h" 

#include <iostream>
#include "db.h"
#include "db_data_containers.h"
#include "cdr.h"
#include <time.h>
#include "Debug.h"

using namespace std;

FILE *login;
unsigned char cdr_buf[1000];
char dump_file[256];
unsigned char start_signature[3];
char ca_login_string[50];

char cust_care_login[128];
char rate_login[128];
char cdr_dump_location[128];
int global_cdr_counter;


cdr_buffer *cdr_store;
bool core_dump;

connections				*gsm_connections;
value_added_services	*gsm_value_added_services;
rates					*gsm_rates;
rate_groups				*gsm_rate_groups;
rated_cdr				*Uplink_rated_cdr;
rated_cdr				*Downlink_rated_cdr;
rated_cdr				*gsm_cdr_block;
roaming_networks		*gsm_roaming_networks;
historic_imsi			*gsm_historic_imsi;
time_discount_bands		*gsm_time_discount_bands;
holiday_priorities		*gsm_holiday_priorities;
cdr_rejects				*gsm_cdr_rejects;

// --db data containers end

	//cdr_decode raw_cdr;			// all the methods to extract data from a cdr
	gprs_cdr_decode raw_cdr;	

	//gprs_cdr_decode gprsdecode;


	token* run_ticket;

int main(int argc,char** argv)
{
	cout<<"\n***************************************"<<endl 
	<<"Dialog GSM GPRS Rate Engine"<<endl 
	<<"Millennium Information Technologies"<<endl 
	<<"Colombo, Sri Lanka"<<endl 
	<<"ver 0.0.1 compiled on "<<__DATE__<<endl 
	<<"***************************************"<<endl;

#ifdef RE_RATE
	cout<<"Config =  Re Rate  "<<endl;
#endif

#ifdef TICKET_ACTIVE
	cout<<"Config =  TICKET ENABLED "<<endl;
#else
	cout<<"Config =  TICKET DISABLED "<<endl;
#endif

#ifdef TICKET_ACTIVE
	// tokens to prevent multiple instances running 
	run_ticket =new token("./gprs_rate_eng.ticket");
	if(run_ticket->is_runable()) 
	{ 
	run_ticket->set_token(T_ON); 
	} 
	else 
	{ 
	cout<<" No ticket to run"<<endl; 
	exit(0); 
	}
#endif

		
	// db data containers memory allocation start
	cdr_store					= new cdr_buffer(1024*1024*70); // allocate space in memory for binary read of whole cdr file
	gsm_value_added_services	= new value_added_services;
	gsm_connections				= new connections;
	gsm_rates					= new rates;
	gsm_rate_groups				= new rate_groups;
	Uplink_rated_cdr			= new rated_cdr;
	Downlink_rated_cdr			= new rated_cdr;
	gsm_cdr_block				= new rated_cdr[INSERT_SIZE];
	gsm_roaming_networks		= new roaming_networks;
	gsm_historic_imsi			= new historic_imsi;
	gsm_time_discount_bands		= new time_discount_bands;
	gsm_holiday_priorities		= new holiday_priorities;
	gsm_cdr_rejects				= new cdr_rejects;
	// db data containers memory allocation end
	
	// allocate space in memory for binary read of whole cdr file
	cdr_files cdr_f;


	// get config data
	if( (login  = fopen( "./gprs_rate_eng.config", "r" )) == NULL )
	{
		printf( "The file 'gprs_rate_eng.config' was not opened\n" );
		exit(0);
	}

	fscanf( login, "%s", cust_care_login );
	fscanf( login, "%s", rate_login );
	fscanf( login, "%s", cdr_dump_location );

	//cout<<cust_care_login<<" "<<rate_login<<" "<<cdr_dump_location<<endl;
	cout <<"cdr_dump_location : " << cdr_dump_location<<endl;

	if( fclose( login ) )
		printf( "The file 'rate_eng.config' was not closed\n" );


	db_login_customer_care(cust_care_login);
	
	gsm_connections->db_read();
	gsm_value_added_services->db_read();
	gsm_historic_imsi->db_read();
	gsm_rates->db_read();
	gsm_rate_groups->db_read();
	gsm_time_discount_bands->db_read();
	gsm_holiday_priorities->db_read();
	gsm_roaming_networks->db_read();
	// gsm_roaming_networks->print();

	db_logout_customer_care();


	
	debug("\nReady to connect to CDR data base\n");
	//db_connect(rate_login);
	db_login_rating(rate_login);

#ifdef RE_RATE
	gsm_cdr_rejects->read_reject_date_range_file("./gprs_cdr_reject_date_range.config");
	gsm_cdr_rejects->db_read(); // with dates read in from config file
	gsm_cdr_rejects->print();
#endif

	cdr_f.db_read();		// read in list of cdrs files to be rated from database
	
	cdr_f.init(cdr_dump_location);

	// Rate eng performance measurement defs
	time_t	run_start_time,		// when rating process was awakend
		run_end_time,			// when rating process stopped
		file_start_time,		// start of rating a cdr file
		file_end_time,			// when cdr file stopped rating
		time_now;
	
	int	total_cdrs_rated = 0;	// cumilative for this run over all cdr files
	int cdrs_pending_insert = 0;// must allways be less than block size
	int cdrs_inserted = 0;		// must allways be less than block size

	float cdr_rate;				// rate at which cdrs are processed
	// observers keep the rateing results for all the types of rating runs for a cdr
	rating_observer initial, local_charge, discount_number, discount_cele, discount_group ;


	FILE *fp;
	cdr_file_statistics *s;		// the stuff is stored in a map so dont allocate storage,
								// this gives access to storage area in map, but must assign!!
	


	time( &run_start_time );					// time rate engine woke up
	while(cdr_f.get_next_file(&fp,&s))			// get handle of cdr file
	{
		global_cdr_counter=0;
		time(&file_start_time);					// time this cdr file rateing began

		cdr_store->read_cdr_file(fp,s);			// read in whole file to buffer
		raw_cdr.set_statistics_collector(s);	// direct statistics to file statistics area
		
		while(cdr_store->get_cdr_start())		// look for start of a cdr in the file
		{
			raw_cdr.decode(cdr_store->current);
			
			//if (core_dump)								// if  error dump to screen
			//{
				//cdr_store->print_cdr_in_hex();
				//cout<<raw_cdr<<endl;
			//}

#ifdef RE_RATE
			if(gsm_cdr_rejects->is_reject_uplink_downlink(s->file_id, cdr_store->get_cdr_position(), "GPRS_UP"))
#endif
			{
				Uplink_rated_cdr->init(s->file_id, cdr_store->get_cdr_position());
				Uplink_rated_cdr->unpack_Uplink(&raw_cdr, s);
				gsm_connections->set_detail(Uplink_rated_cdr);
				initial.init(0,"O");  // O = original
				rating_observer *r_o_u;
				r_o_u = &initial;

				gsm_rates->match(Uplink_rated_cdr->rate_group_id, Uplink_rated_cdr->accessPointName, *Uplink_rated_cdr, initial);
				Uplink_rated_cdr->billing = *r_o_u;
			

				//database log and perfromance statistics
				gsm_cdr_block[cdrs_pending_insert] = (*Uplink_rated_cdr);
				global_cdr_counter++;
				cdrs_pending_insert++;
				total_cdrs_rated++; 

				if (INSERT_SIZE == cdrs_pending_insert)
				{
					cdrs_inserted += cdrs_pending_insert;
					#ifdef DBLOG
					db_insert_rated_cdr(cdrs_pending_insert);
					#endif
					cdrs_pending_insert = 0;	// must allways be after the insert!!
				}
			}
			
#ifdef RE_RATE
			if(gsm_cdr_rejects->is_reject_uplink_downlink(s->file_id, cdr_store->get_cdr_position(), "GPRS_DOWN"))
#endif
			{
				Downlink_rated_cdr->init(s->file_id, cdr_store->get_cdr_position());
				Downlink_rated_cdr->unpack_Downlink(&raw_cdr, s);
				gsm_connections->set_detail(Downlink_rated_cdr);	// get CDR details
				initial.init(0,"O");  // O = original
				rating_observer *r_o_d;
				r_o_d = &initial;

				gsm_rates->match(Downlink_rated_cdr->rate_group_id, Downlink_rated_cdr->accessPointName, *Downlink_rated_cdr, initial);
				Downlink_rated_cdr->billing = *r_o_d;

				gsm_cdr_block[cdrs_pending_insert] = (*Downlink_rated_cdr);
				global_cdr_counter++;
				cdrs_pending_insert++;
				total_cdrs_rated++; 

				if (INSERT_SIZE == cdrs_pending_insert)
				{
					cdrs_inserted += cdrs_pending_insert;
					#ifdef DBLOG
					db_insert_rated_cdr(cdrs_pending_insert);
					#endif
					cdrs_pending_insert = 0;	// must allways be after the insert!!
				}
			}
			
		}

		if(fclose(fp))
			cout<<"<ERROR> cant close cdr file"<<endl; // only valid files get here
		
		time( &file_end_time );
		
		// time file was rated
		char time_buf[50];
		strftime(time_buf, 15, "%Y%m%d%H%M%S",localtime(&file_start_time));
		s->rating_start_date	= time_buf;
		s->rating_duration		= (int)difftime(file_end_time, file_start_time); 
		// remember ariane 5 so why cast?. Ans not critical, 1*e9 secs = 1900 years no overflow possible
		
//#ifdef SUN
	//	ProcessAdm.SendStat("FILE INFO","File id %d  rated %d cdrs in %6.0f secs",
			//s->file_id, s->valid_cdr_count, difftime(file_end_time, file_start_time));
//#endif
		//cout<<"Statistics : " <<*s<<endl;
		cdr_f.db_update(*s);
		
		if(s->error_count > 0)
			cout<<"         Error count "<<s->error_count<<endl;
		cdr_store->init(); // rest all pointers
			
			cdr_store->init(); // rest all pointers	
	}

#ifdef DBLOG
	// get any partial block size inserts
	cout <<"FINAL cdrs_pending_insert : " << cdrs_pending_insert << endl;
	if(cdrs_pending_insert > 0)
		db_insert_rated_cdr(cdrs_pending_insert);
#endif

	db_logout_rating();

#ifdef TICKET_ACTIVE
	run_ticket->set_token(T_OFF);	// release lock
	delete run_ticket;
#endif

	return 0;
}


