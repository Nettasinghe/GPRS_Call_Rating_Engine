

// configuration information


/*
	files to watch when changing from rate to re-rate
	db_cdr_files
		a) dump files tables (two locations in file)
	db_insert_cdr
		a) cdr table
	db_connections
		a) connections view
	db_read_value_added_services
		change view to R_V

	cdr_buffer
		a) reject processing set by define RE_RATE
	rate_eng
		a) reject processing set by define RE_RATE
		b) Dialog non dialog issues

	// re rate useage
		a) r_re_rate_gprs_dump_files	<- cdr files
		b) R_RE_RATED_GPRS_CDR			<- re- rated cdrs (gets inserted here, so clear before use)
		c) R_RE_RATE_GPRS_CONNECTIONS_V	<- connections
		d) R_VAS_GPRS_R_V				<- value added service _R_ for rerate
*/


//#define DEBUG			// Comment out to turn off debug messages
#define DBLOG

#define TICKET_ACTIVE	// ticket to run enables
#define RE_RATE_VERSION	// re_rate for reject processing




#ifdef RE_RATE_VERSION
	#define HISTORIC
	#define RE_RATE
	#undef TICKET_ACTIVE 
#endif 
