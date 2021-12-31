

/////////////////////////////////////////////////// 
//
//  Project		: GSM GPRS Call Rating and Rerating
//  File		: db_data_containers.h 
//  Description	: header file for main classes
//  Date		: 02 Jan 2002 
//  Developer	: Chandika Nettasinghe
//
///////////////////////////////////////////////////

#ifndef DB_DATA_CONTAINERS
#define DB_DATA_CONTAINERS


#pragma warning(disable:4786)

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stdio.h>
#include "cdr.h"

using namespace std;

#define RATE_S cout
#define MIN_YEAR 1949
#define MAX_YEAR 2051
#define WILD_CARD "UNDEF"
#define BILLING_THRESHOLD_DURATION 4
#define ROAMING_ACCOUNT 999999

typedef enum
{	R_RATED				= 0,
	R_CLIENT_NOT_FOUND	= 1,
	R_NO_RATE_PLAN		= 2,
	R_NO_MATCHING_RULE	= 3,
	R_DUPLICATE_RULES	= 4,
	R_UNDEF				= 9
} e_rate_result;

typedef enum
{
	O_PLUS	= 1,
	O_MINUS	= 2,
	O_MUL	= 3,
	O_DIV	= 4,
	O_ASSIGN= 5,
	O_AT	= 6,
	O_GPRS_ACCESS	= 7,
	O_UNDEF	= 0
} e_operator;

class rating_observer
{
public:
	float charge;				// after applying time discounts, inital
	float charge_discount_expression;
	float discounted_charge;	// after applying other discounts to be billed

	int score;					// score 
	int block_approximated_call_duration;

	float units;
	float unit_cost;			// the cost of a unit
	int unit_duration;			// the length of a unit in secs
	
	string	rate_rule_id;		// rule used for call rating

	bool rated;					//sucessfuly rated
	string comments;			// remove
	string score_comment;		// remove
	string result_id;			// R rated, U unrated; // remove
	e_rate_result rate_result;

	string time_band_type;
	string discount_type;

	void init(float chg, string d_type);
};

ostream& operator<<(ostream& out, rating_observer x);



class reng_time;

class reng_time
{
public:
	int hour;
	int min;
	int second;
	bool set_time(int h, int m, int s=0);
	bool set_time(char *t);
	bool set_h_m(const char *t);
	bool set_from_db(char *t, int secs);

	bool operator < (const reng_time  &s) const;
	reng_time operator+ (int s) const;
	void Print();
	void init();
};


ostream& operator<<(ostream& out, reng_time x);

class reng_date
{
public:
	int year;
	int month;
	int day;
	bool operator < (const reng_date  &s) const;
	bool set_date(int y, int m, int d);
	bool set_date(char *d);
	void init();
};

ostream& operator<<(ostream& out, reng_date x);


class reng_date_time
{
public:
	reng_date date;
	reng_time time;
	bool set_date_time(char *d);
	bool operator < (const reng_date_time  &s) const;
};

ostream& operator<<(ostream& out, reng_date_time x);


class time_band_data
{
public:
	reng_time start;
	reng_time end;
	string description;
	bool is_in_band(reng_time t); // pass by value
};

ostream& operator<<(ostream& out, time_band_data x);

// Holiday priorities -- start ------------------------------------------------
class holiday_priority_key
{
public:
	reng_date date;
	string day_id;
	bool operator < (const holiday_priority_key  &s) const;
};

ostream& operator<<(ostream& out, holiday_priority_key x);

typedef map<holiday_priority_key, int, less<holiday_priority_key> > H_PRIORITY_DEF;

class holiday_priorities
{
public:
	H_PRIORITY_DEF h_priority;
	bool insert(holiday_priority_key &k, int priority);
	bool get_priority(reng_date dte, string day_id, int &p);
	void db_read();
	void print();
};
// Holiday priorties -- end ---------------------------------------------------



// value added services -- start ----------------------------------------------
class value_added_services_key
{
public:
	int			account_no;
	string		service_code;
	bool operator < (const value_added_services_key  &s) const;
};

ostream& operator<<(ostream& out, value_added_services_key x);


class value_added_services_data
{
public:
	string		rate_group_id;
	reng_date	start_date;
	reng_date	end_date;
};
ostream& operator<<(ostream& out, value_added_services_data x);


typedef multimap<value_added_services_key, value_added_services_data, less<value_added_services_key> > VAL_ADD_SERVICES_DEF;


class value_added_services
{
public:
	VAL_ADD_SERVICES_DEF v_services;

	bool insert(value_added_services_key &k, value_added_services_data &d);
	//bool set_value_added_rate_group(rated_cdr &cdr);
	bool get_air_group(int ac_no, string &air);
	bool get_sms_group_mo(int ac_no, string &sms);
	bool get_sms_group_mt(int ac_no, string &sms);
	void print();
	void db_read();

};
// package services -- end ----------------------------------------------------

// rated_cdr, rate_groups & rate_group_data -- start --------------------------

class cdr_decode;
//class connection_detail;

class connection_detail
{
public:
	int		account_no;				// the customer unique id
	string	client_code;			// a secondry unique id which we dont need
	int		phone_no;				// cell phone number
	string	imei_no;				// international mobile equipment identifier
	string	sim_no;					// sim card number
	string	group_code;				// the discount group code
	string  group_rate_plan_id;		// rate plan applicable to group (discount)

	string	package_code;			// the rateing package (bill plan) code
	// risk management 
	float	gross_charge_for_run;	// the charge for connection for this rating run
	void init();
};

ostream& operator<<(ostream& out, connection_detail x);

//class IPAddress;
//class qos;

class rated_cdr
{
public:
	bool vaild;

	int file_id;			// the number of the file
	int file_pos;			// the bytes from start of cdr where file started

	// fields
	int			recordType;
	char		servedIMSI[BUF_LEN];
	IPAddress	sgsnAddress;
	int			msNetworkCapability;
	char		routingArea[BUF_LEN];
	int			locationAreaCode;
	int			cellIdentity;
	long int	chargingID;
	IPAddress	ggsnAddress;
	char		accessPointName[BUF_LEN];
	int			pdpType;
	IPAddress	servedPDPAddress;

	qos			qosRequested_SGSN;
	qos			qosNegotiated_SGSN;
	int			dataUplink_SGSN;
	int			dataDownlink_SGSN;
	int			changeCondition_SGSN;
	char		changeTime_SGSN[BUF_LEN];

	qos			qosNegotiated_GGSN;
	int			dataUplink_GGSN;		
	int			dataDownlink_GGSN;
	int			changeCondition_GGSN;
	char		changeTime_GGSN[BUF_LEN];

	char		recordOpeningTime_SGSN[BUF_LEN];
	char		recordOpeningTime_GGSN[BUF_LEN];
	int			duration;
	int			causeForRecClosing;
	int			recordSequenceNumber;
	char		nodeID[BUF_LEN];
	char		servedMSISDN[BUF_LEN];
	// fields - end

	// calculated
	int			data_volume;
	reng_date_time	cdr_time_stamp;
	reng_date	cdr_date;

	// call detail
	int type_of_msc;
	//int type_of_call;
	string type_of_call;
	int call_termination_type;
	int origin_of_call_indicator;
	int charging_indicator;
	int required_tele_service;
	int required_bearer_service;

	int call_duration;
	int invoked_supplementary_services;
	string required_bearer_capability;

	string mobile_station_identity;
	string link_information;
	string mobile_subscriber_identity;
	int msc_identity_extension;
	string msc_identity;

	int call_partner_extension;
	string call_partner_identity;		// needs unpacking to get all the info
	string ms_location_identity;
	int ms_location_identity_extention;

	// call timing stuff
	string circuit_allocation_time_stamp;
	string call_time_stamp;
	string fixed_network_info;

	// gathered stuff for dumping
	// connections table
	connection_detail connection_d;
	
	bool imsi_found;

	// a quick hack-to be rationalised
	string group_discount_rate_plan_id;	 // call partner rate plan for group discounts

	// for rate rule selection
	string service_type_id;
	string locale_id;

	// decoded stuff
	reng_time d_circuit_allocation_time;
	reng_date d_circuit_allocation_date;
	string rate_group_id;
	string decoded_service;				// with all operator specified value added services included
										// used only to get a fix on rate group.
	// call partner info
	string call_partner_network_id;		// telephone company 077=dialog, 074=suntel.
	string call_partner_telephone_no;	// 6 digits
	string call_partner_group;			// users can be grouped for inter group discounts

	string discount_type;				// varchar2(1)
	string mcc;							// mobile country code
	string mnc;							// mobile network code
	int lac;							// location area code
	int ci;								// cell id
 
	int tap_flag;

	///rating_observer billing;			// rating results

	//bool unpack(cdr_decode *a);
	//bool unpack(gprs_cdr_decode *cdr);
	bool unpack_Uplink(gprs_cdr_decode *cdr, cdr_file_statistics *s);
	bool unpack_Downlink(gprs_cdr_decode *cdr, cdr_file_statistics *s);
	void init(int f_id, int f_pos);
	bool decode_service();
	bool decode_network();

	bool print();

	rating_observer billing;			// rating results

};

ostream& operator<<(ostream& out, rated_cdr x);

//int  match(rated_cdr &c, rate_detail &r);

class rate_group_data
{
public:
	string re_rate_group_id;			// varchar2(5)
	int time_threshold;					// not null number(3)
	// key string rate_group_id;		// not null varchar2(5)
};



ostream& operator<<(ostream& out, rate_group_data x);

typedef map<string, rate_group_data, less<string> > RATE_GRP_DEF;

class rate_groups
{
public:
	RATE_GRP_DEF r_group;
	void insert(string rate_grp, rate_group_data rgd);
	void print();
	void db_read();
	int get_time_threshold(string rate_grp);
	string get_re_rate_group(string rate_grp);
};

// rated_cdr, rate_groups & rate_group_data -- end ----------------------------

// Rates -- begin -------------------------------------------------------------
class rate_key
{
public:
	string	rate_group_id;
	string	call_type_id; 
	string	locale_id; 
	string	service_type_id; 

	bool operator < (const rate_key &s) const;
};

ostream& operator<<(ostream& out, rate_key x);


class rate_detail
{
public:
	string			time_band_group; 
	string			unit_rate_id; 
	string			default_rate; 
	string			rate_id; 
	string			day_id;
	int				priority; 
	string			route_group_id;
	string			net_group_id;
	string			time_band_type;
	string			time_block_id;
	string			discount_group_id;
	int				unit_duration;
	float			unit_cost;
	int				billable_duration;
	time_band_data	active_period;

	string			start_date; 
	string			end_date;
	int				call_duration;
};

ostream& operator<<(ostream& out, rate_detail x);


typedef multimap<rate_key, rate_detail, less<rate_key> > RATE_DEF;
typedef map<string, rate_detail, less<string> > RATE_ID_SC_DEF;

class rates
{
public:
	RATE_DEF rate_data;
	RATE_ID_SC_DEF rate_ids;

	class rule_score
	{
	public:
		int day_type;
		//int network_group;
		//int cell_group;
		int duration;

		void init();
		rule_score();
		bool operator < (const rule_score &s) const;
		bool operator == (const rule_score &s) const;
	};

	bool insert(rate_key &rk, rate_detail &rd);
	bool match(string rate_group, string a_locale_id, rated_cdr &cdr, rating_observer &observer);
	bool score_rule(rated_cdr &cdr, RATE_DEF::iterator rule_iter, rule_score &score);
	void print();
	void db_read();
};
// Rates -- end ---------------------------------------------------------------

// gprs_connections -- start --------------------------------------------------

class client
{
public:
	int			account_no;
	string		client_code;
	string		rate_group_id;
	reng_date	service_start_date;
	reng_date	service_end_date;
};


class connection_key
{
public:
	string	imsi_no;
	bool operator < (const connection_key &s) const;
	connection_key& operator=(const string &s);
};

ostream& operator<<(ostream& out, connection_key x);

//typedef map<int, client, less <int> > CLIENT_DEF;
typedef map<int, client > CLIENT_DEF;
typedef map<string, connection_detail > IMSI_DEF;

typedef map<connection_key, connection_detail, less<connection_key> > CONNECTION_DEF;
typedef map<int, string, less<int> > PHONE_NO_TO_GRP_DEF;
typedef map<int, string, less<int> > PHONE_NO_TO_IMSI_DEF;	// 
// map for acc_no - to imsi
typedef map<int, string, less<int> > ACC_NO_TO_IMSI_DEF;	// historic imsi lookup


class connections
{
public:
	CONNECTION_DEF conn;					// asscociate imsi with connection details
	PHONE_NO_TO_GRP_DEF ph_to_grp;			// associate phone number with group
	PHONE_NO_TO_IMSI_DEF ph_to_imsi;		// asscocate phone number with imsi
	ACC_NO_TO_IMSI_DEF ac_to_imsi;			// asscocate account no with imsi

	CONNECTION_DEF::iterator iter;
	void insert(string imsi, connection_detail &a );
	void db_read();

	CLIENT_DEF	gprs_client_map;
	IMSI_DEF	gprs_imsi_map;

	void		insert(int i, client &c);


	bool get_client(connection_key imsi, connection_detail &a, string call_time);
	bool get_client_from_historic_imsi(int account_no, connection_detail &a, string &call_time);
	bool get_group(int ph_no, string &grp);
	bool set_detail(rated_cdr *cdr);
	bool set_call_partner_group(rated_cdr &rated_cdr);
	bool add_gross_call_charge(connection_key k, float call_charge);
	//void db_read();
	void db_insert_revenue(int run_id);
	void print();
	bool is_new_client(string imsi);
	
};

// gprs_connections -- end ------------------------------------------------------

// class aritmetic discount -- begin ------------------------------------------
class discount_expression
{
public:
	e_operator		dis_operator;
	float			dis_operand;
bool  compute(float x, float & result);
};
ostream& operator<<(ostream& out, e_operator x);
// class aritmetic discount -- end --------------------------------------------


// ----------------------------------------------------------------------------

class historic_imsi_key
{
public:
	string	imsi_no;
	bool operator < (const historic_imsi_key &s) const;
};


class historic_imsi_data
{
public:
	string	start;
	string	end;
	int		account_no;
};

class time_discount_band_data : public discount_expression
{
public:
	int		start_second;
	int		end_second;
};

ostream& operator<<(ostream& out, time_discount_band_data x);

ostream& operator<<(ostream& out, time_band_data x);

ostream& operator<<(ostream& out, time_discount_band_data x);
ostream& operator<<(ostream& out, historic_imsi_key x);


// imsi -> A/C, start-end
typedef multimap<historic_imsi_key, historic_imsi_data, less<historic_imsi_key> > HIST_IMSI_DEF;

class historic_imsi
{
public:
	HIST_IMSI_DEF h_imsi;
	void db_read();
	void insert(string imsi, int ac, string start, string end);
	bool get_account_no(string imsi, string call_time, int &account_no);
	void print();
};
ostream& operator<<(ostream& out, historic_imsi_data x);
// historic_imsi - end --------------------------------------------------------------------

// Time band discount bands -- begin ------------------------------------------

class time_discount_band_key
{
public:
	string		group_id;
	bool operator < (const time_discount_band_key  &s) const;
};
ostream& operator<<(ostream& out, time_discount_band_key x);


/*
class time_discount_band_data: public discount_expression
{
public:
	int		start_second;
	int		end_second;
};

ostream& operator<<(ostream& out, time_discount_band_data x);
*/

typedef multimap<time_discount_band_key, time_discount_band_data, less<time_discount_band_key> > TIME_DISCOUNT_DEF;

class time_discount_bands
{
public:
	TIME_DISCOUNT_DEF t_d_band;
	bool insert(string k, time_discount_band_data &d);
	//bool get_client(string imsi, connection_detail &a);
	bool set_discount(string discount_group_id, rated_cdr &c, rating_observer &r_o);
	void db_read();
	void print();
};
// Time band discount bands -- end --------------------------------------------

// roam_networks -- start -----------------------------------------------------

class roam_network_key
{
public:
	string net_prefix;
	bool operator < (const roam_network_key &s) const;
};

ostream& operator<<(ostream& out, roam_network_key x);

typedef map<roam_network_key, string, less<roam_network_key> > ROAM_NET_DEF;

class roaming_networks
{
public:
	ROAM_NET_DEF r_networks;
	void print();
	void db_read();
	string get_rate_group(string roam_number_prefix);
	void insert(string mcc, string mnc, string rate_group_id );
};

// roam_networks -- end -----------------------------------------------------


#endif


