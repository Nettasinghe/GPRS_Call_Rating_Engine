
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned long magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[32];
};
static const struct sqlcxp sqlfpn =
{
    31,
    "f:\\latestcode\\gprs_rating\\db.pc"
};


static unsigned long sqlctx = 559194411;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   unused;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
            void  *sqhstv[38];
   unsigned int   sqhstl[38];
            int   sqhsts[38];
            void  *sqindv[38];
            int   sqinds[38];
   unsigned int   sqharm[38];
   unsigned int   *sqharc[38];
   unsigned short  sqadto[38];
   unsigned short  sqtdso[38];
} sqlstm = {10,38};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned long *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned long *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned long *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(char *, int *); }

 static const char *sq0007 = 
"select FILE_NAME ,CDR_FILE_ID_NO  from gprs_dump_files where RATING_START_DA\
TE is null            ";

 static const char *sq0010 = 
"select ACCOUNT_NO ,CLIENT_CLIENT_CODE ,PHONE_REG_PHONE_NO ,IMSI_NO ,IMEI_NO \
,SIM_NO ,GROUP_GROUP_CODE ,PKG_PACKAGE_CODE ,COMMENCEMENT_DATE ,DISCONNECTED_D\
ATE ,CONTRACT_END_DATE  from R_GPRS_CONNECTIONS_V            ";

 static const char *sq0013 = 
"select HOLIDAY_DATE ,DAY_ID ,PRIORITY  from r_holiday_priorities_v          \
  ";

 static const char *sq0014 = 
"select RATE_GROUP_ID ,RE_RATE_GROUP_ID ,TIME_THRESHOLD  from R_RATE_GROUPS_V\
            ";

 static const char *sq0015 = 
"select RATE_GROUP_ID ,RATE_ID ,PRIORITY ,DEFAULT_RATE ,CALL_TYPE_ID ,LOCALE_\
ID ,DAY_ID ,ROUTE_GROUP_ID ,NET_GROUP_ID ,SERVICE_TYPE_ID ,TIME_BAND_GROUP ,TI\
ME_BAND_TYPE ,TIME_BLOCK_ID ,DISCOUNT_GROUP_ID ,UNIT_RATE_ID ,UNIT_DURATION ,C\
OST_UNIT ,BILLABLE_DURATION ,START_DATE ,END_DATE ,START_TIME ,END_TIME ,CALL_\
DURATION  from R_RATE_RULE_GPRS_V            ";

 static const char *sq0016 = 
"select BAND_ID ,START_SECOND ,END_SECOND ,OPERATOR ,OPERAND ,DISCOUNT_GROUP_\
ID  from R_TIME_DISCOUNT_BANDS_V            ";

 static const char *sq0017 = 
"select CONN_ACCOUNT_NO ,CONN_CLIENT_CLIENT_CODE ,SERVICE_SERVICE_CODE ,RATE_\
GRP_RATE_GROUP_ID ,START_DATE ,END_DATE  from R_VALUE_ADDED_SERVICES_GPRS_V   \
         ";

 static const char *sq0018 = 
"select NVL(MCC,'') ,NVL(MNC,'') ,NVL(GPRS_RATE_GROUP_ID,'')  from GSM_NETWOR\
KS            ";

 static const char *sq0019 = 
"select FILE_ID ,FILE_POS ,UPLINK_DOWNLINK  from R_RJECTED_GPRS_CDRS_V where \
(CALL_TIME>=:b0 and CALL_TIME<=:b1)           ";

 static const char *sq0020 = 
"select IMSI_NO ,ACCOUNT_NO ,TO_CHAR(START_DATE,'YYYYMMDDHH24MISS') ,TO_CHAR(\
END_DATE,'YYYYMMDDHH24MISS')  from SIM_NO_HISTORY where END_DATE is  not null \
           ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{10,4146,0,0,0,
5,0,0,1,0,0,27,76,0,0,4,4,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,1,5,0,
0,1,10,0,0,1,10,0,0,1,10,0,0,
49,0,0,2,59,0,1,78,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
77,0,0,3,0,0,27,89,0,0,4,4,0,3,6,82,65,84,73,78,71,1,5,0,0,1,10,0,0,1,10,0,0,1,
10,0,0,
114,0,0,4,59,0,1,90,0,0,0,0,0,3,6,82,65,84,73,78,71,
135,0,0,5,0,0,30,97,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
163,0,0,6,0,0,30,104,0,0,0,0,0,3,6,82,65,84,73,78,71,
184,0,0,7,98,0,9,135,0,0,0,0,0,3,6,82,65,84,73,78,71,
205,0,0,7,0,0,13,141,0,0,2,0,0,3,6,82,65,84,73,78,71,2,5,0,0,2,3,0,0,
234,0,0,7,0,0,15,156,0,0,0,0,0,3,6,82,65,84,73,78,71,
255,0,0,8,243,0,5,204,0,0,7,7,0,3,6,82,65,84,73,78,71,1,3,0,0,1,3,0,0,1,3,0,0,
1,5,0,0,1,5,0,0,1,3,0,0,1,3,0,0,
304,0,0,9,0,0,29,219,0,0,0,0,0,3,6,82,65,84,73,78,71,
325,0,0,10,215,0,9,286,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
353,0,0,10,0,0,13,293,0,0,11,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,5,0,0,2,3,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
2,5,0,0,
425,0,0,10,0,0,15,341,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
453,0,0,11,256,0,3,526,0,0,38,38,0,3,6,82,65,84,73,78,71,1,3,0,0,1,3,0,0,1,3,0,
0,1,4,0,0,1,4,0,0,1,3,0,0,1,3,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,
0,0,1,5,0,0,1,5,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,5,0,0,1,5,0,0,
1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,3,0,0,1,5,0,0,
626,0,0,12,0,0,29,529,0,0,0,0,0,3,6,82,65,84,73,78,71,
647,0,0,13,78,0,9,554,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
675,0,0,13,0,0,13,562,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
5,0,0,2,5,0,0,2,3,0,0,
715,0,0,13,0,0,15,573,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
743,0,0,14,88,0,9,599,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
771,0,0,14,0,0,13,606,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
5,0,0,2,5,0,0,2,3,0,0,
811,0,0,14,0,0,15,614,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
839,0,0,15,355,0,9,672,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
867,0,0,15,0,0,13,679,0,0,23,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
5,0,0,2,5,0,0,2,3,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,3,0,0,2,4,0,0,2,3,0,0,2,5,0,0,2,5,0,
0,2,5,0,0,2,5,0,0,2,3,0,0,
987,0,0,15,0,0,15,713,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1015,0,0,16,120,0,9,743,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1043,0,0,16,0,0,13,750,0,0,6,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
5,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,2,5,0,0,
1095,0,0,16,0,0,15,761,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1123,0,0,17,163,0,9,810,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1151,0,0,17,0,0,13,817,0,0,6,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
3,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,2,5,0,0,
1203,0,0,17,0,0,15,854,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1231,0,0,18,90,0,9,878,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1259,0,0,18,0,0,13,884,0,0,3,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
5,0,0,2,5,0,0,2,5,0,0,
1299,0,0,18,0,0,15,888,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1327,0,0,19,122,0,9,929,0,0,2,2,0,3,6,82,65,84,73,78,71,1,5,0,0,1,5,0,0,
1356,0,0,19,0,0,13,935,0,0,3,0,0,3,6,82,65,84,73,78,71,2,3,0,0,2,3,0,0,2,5,0,0,
1389,0,0,19,0,0,15,946,0,0,0,0,0,3,6,82,65,84,73,78,71,
1410,0,0,20,165,0,9,987,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
1438,0,0,20,0,0,13,993,0,0,4,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,2,
5,0,0,2,3,0,0,2,5,0,0,2,5,0,0,
1482,0,0,20,0,0,15,1003,0,0,0,0,0,2,13,67,85,83,84,79,77,69,82,95,67,65,82,69,
};


/////////////////////////////////////////////////// 
//Project		: GSM GPRS Call Rating and Rerating
//File			: db.pc 
//Description	: pro*C file for database mediation
//Date			: 02 Jan 2002 
//Author		: Chandika Nettasinghe 
///////////////////////////////////////////////////

/*
	 re rate useage - search for RE_RATE_SEARCH - 5 locations in this file
		a) r_re_rate_gprs_dump_files	<- cdr files
		b) R_RE_RATED_GPRS_CDR			<- re- rated cdrs (gets inserted here, so clear before use)
		c) R_RE_RATE_GPRS_CONNECTIONS_V	<- connections
		d) R_VAS_GPRS_R_V				<- value added service _R_ for rerate
*/

#include <iostream>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sqlcpr.h>
#include <sqlca.h>
#include <sqlda.h>
#include <oraca.h>


#pragma warning(disable:4786)
using namespace std;

#ifndef ORA_PROC
	#include "db.h"
	#include "db_data_containers.h"
	#include "Debug.h"
	extern connections	*gsm_connections;
#endif

extern int global_cdr_counter;

#define BUF_LEN		100
#define FETCH_SIZE  10
#define BUF_L		102
#define INSERT_SIZE 100
#define BUF_LENTH	20

/* EXEC SQL DECLARE CUSTOMER_CARE DATABASE; */ 
 
/* EXEC SQL DECLARE RATING DATABASE; */ 



/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char *login_cust_care;
	char *login_rating;
/* EXEC SQL END DECLARE SECTION; */ 


#ifndef code_skip
#include <fstream>
extern rated_cdr *gsm_cdr_block;
#endif


void db_error(char* zErrorMsg)
{
	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

	cout << endl << zErrorMsg << endl<<flush;
	cout << sqlca.sqlerrm.sqlerrmc << endl<<flush;
	exit(0);
}


void db_login_customer_care(char* zLoginString)
{
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	//EXEC SQL WHENEVER SQLERROR DO sql_error("ORACLE error--");

	login_cust_care = zLoginString;
	/* EXEC SQL CONNECT :login_cust_care AT CUSTOMER_CARE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )10;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (         void  *)login_cust_care;
 sqlstm.sqhstl[0] = (unsigned int  )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


	cout << "Connecting to Oracle as  :" << login_cust_care << endl;
	/* EXEC SQL AT CUSTOMER_CARE ALTER SESSION SET NLS_DATE_FORMAT="DD/MM/YYYY HH24:MI:SS"; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = \"DD/MM/YYYY HH24:MI:SS\"";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )49;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


	cout<<"\nConnected to Customer Care Database"<<endl<<endl;
}

void db_login_rating(char* zLoginString)
{
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	//EXEC SQL WHENEVER SQLERROR DO sql_error("ORACLE error--");

	login_rating = zLoginString;
	cout << "Conncecting to Oracle as : " << login_rating << endl;
	/* EXEC SQL CONNECT :login_rating AT RATING; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )10;
 sqlstm.offset = (unsigned int  )77;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (         void  *)login_rating;
 sqlstm.sqhstl[0] = (unsigned int  )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


	/* EXEC SQL AT RATING ALTER SESSION SET NLS_DATE_FORMAT="DD/MM/YYYY HH24:MI:SS"; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = \"DD/MM/YYYY HH24:MI:SS\"";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )114;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	cout<<"\nConnected to Rating Database"<<endl<<endl;
}

void db_logout_customer_care()
{
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC SQL AT CUSTOMER_CARE COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )135;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


	cout<<"\nDisconnect from oracle "<<endl;
}

void db_logout_rating()
{
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC SQL AT RATING COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )163;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


	cout<<"\nDisconnect from oracle "<<endl;
}


// get cdr files
void cdr_files::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct cdr_file_t
	{ 
		char file_name[BUF_L];			// varchar2(123)
		int file_id;					// called id_no in table number(9)
	} a[FETCH_SIZE]; 
	int rows_to_fetch, rows_before, rows_this_time; 

	/* EXEC SQL END DECLARE SECTION; */ 


	int i;

	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE;
	 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

    /* EXEC SQL AT RATING DECLARE c_cdr_file CURSOR FOR 
	SELECT	FILE_NAME,  CDR_FILE_ID_NO
	FROM	gprs_dump_files
	//FROM	r_re_rate_gprs_dump_files		// RE_RATE_SEARCH - 1
	WHERE RATING_START_DATE IS NULL; */ 

       
    /* EXEC SQL AT RATING OPEN c_cdr_file; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0007;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )184;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 
 

	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL AT RATING FETCH c_cdr_file INTO :a; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )10;
  sqlstm.offset = (unsigned int  )205;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (         void  *)a->file_name;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )sizeof(struct cdr_file_t);
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqharc[0] = (unsigned int   *)0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&a->file_id;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )sizeof(struct cdr_file_t);
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqharc[1] = (unsigned int   *)0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 		 
		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
		//printf(" this=%d before=%d to_fetch=%d\n", rows_this_time, rows_before, rows_to_fetch);


		cdr_file_statistics cd;
		cd.init();
		for(i=0; i<rows_this_time; i++)
		{
			cd.file_id = a[i].file_id;			
			insert(a[i].file_name, cd);
		}
	} 

    /* EXEC SQL AT RATING CLOSE c_cdr_file; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )234;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    printf("\n %d  cdr files loaded.\n\n",rows_before);
}



void cdr_files::db_update(cdr_file_statistics s)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct cdr_file_t
	{ 
		 int valid_cdr_count;					//  number(7)
		 int error_count;						//	number(7)
		 int bytes_read;						//	number(9)
		 char first_cdr_date[BUF_LENTH];				//	varchar2(14)
		 char last_cdr_date[BUF_LENTH];				//	varchar2(14)
		 int rating_duration;
		 char rating_start_date[BUF_LENTH];	//	varchar2(14)

		 int id_no;						//	number(9)
 	} a; 

	/* EXEC SQL END DECLARE SECTION; */ 


	/* EXEC SQL WHENEVER NOT FOUND GOTO nofile; */ 


//#ifndef code_skip

	 cout << "a.id_no :" <<a.id_no<<endl;
	 cout <<"s.file_id : "<<s.file_id<<endl;
	 a.id_no = s.file_id;
	 cout << "a.id_no :" <<a.id_no<<endl;
	 cout <<"s.file_id : "<<s.file_id<<endl;

	 //a.valid_cdr_count = s.valid_cdr_count;
	 a.valid_cdr_count = global_cdr_counter;
	 a.error_count = s.error_count;
	 a.bytes_read = s.bytes_read;
	 strcpy(a.first_cdr_date, s.first_cdr_date.c_str());
	 strcpy(a.last_cdr_date, s.last_cdr_date.c_str());
	 a.rating_duration = s.rating_duration;
	 strcpy(a.rating_start_date, s.rating_start_date.c_str());
	 
	 	
//#endif

	 /* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	 /* EXEC SQL AT RATING	
	 UPDATE gprs_dump_files
	 //UPDATE	r_re_rate_gprs_dump_files		// RE_RATE_SEARCH - 2

	 SET 
		valid_cdr_count			= :a.valid_cdr_count, 
		error_count				= :a.error_count,
		bytes_read				= :a.bytes_read,
		first_cdr_date			= to_date(:a.first_cdr_date,'YYYYMMDDHH24MISS'),
		last_cdr_date			= to_date(:a.last_cdr_date,'YYYYMMDDHH24MISS'),
		rating_duration			= :a.rating_duration,
		//rating_start_date		= to_date(:a.rating_start_date,'YYYYMMDDHH24MISS')
		rating_start_date		= SYSDATE
	 WHERE cdr_file_id_no  = :a.id_no; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 7;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update gprs_dump_files  set valid_cdr_count=:b0,error_count\
=:b1,bytes_read=:b2,first_cdr_date=to_date(:b3,'YYYYMMDDHH24MISS'),last_cdr_da\
te=to_date(:b4,'YYYYMMDDHH24MISS'),rating_duration=:b5,rating_start_date=sysda\
te  where cdr_file_id_no=:b6";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )255;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (         void  *)&(a.valid_cdr_count);
  sqlstm.sqhstl[0] = (unsigned int  )4;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&(a.error_count);
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&(a.bytes_read);
  sqlstm.sqhstl[2] = (unsigned int  )4;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)(a.first_cdr_date);
  sqlstm.sqhstl[3] = (unsigned int  )20;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)(a.last_cdr_date);
  sqlstm.sqhstl[4] = (unsigned int  )20;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)&(a.rating_duration);
  sqlstm.sqhstl[5] = (unsigned int  )4;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)&(a.id_no);
  sqlstm.sqhstl[6] = (unsigned int  )4;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) goto nofile;
  if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}



	 /* EXEC SQL AT RATING COMMIT; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 7;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )304;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


 
    printf("\n cdr file id=%d log updated.\n\n", s.file_id);
	return;
nofile:
	printf("\n <ERROR> file id = %d  not found to update.\n\n", s.file_id);
}


void connections::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct connection
	{ 
		int		account_no;
		char	client_code[BUF_LEN];
		int		phone_no;
		char	imsi_no[BUF_LEN]; 
		char	imei_no[BUF_LEN]; 
		char	sim_no[BUF_LEN]; 
		char	group_code[BUF_LEN]; 
		char	package_code[BUF_LEN];
		char	commencement_date[BUF_LEN];
		char	disconnected_date[BUF_LEN];
		char	contract_end_date[BUF_LEN];
	} a[FETCH_SIZE];
	
	struct connection_ind
	{ 
  		short	account_no_ind;
		short	client_code_ind;
		short	phone_no_ind;
		short	imsi_no_ind;
		short	imei_no_ind;
		short	sim_no_ind;
		short	group_code_ind; 
		short	package_code_ind;
		short	commencement_date_ind;
		short	disconnected_date_ind;
		short	contract_end_date_ind;
	}a_ind[FETCH_SIZE]; 

	int rows_to_fetch, rows_before, rows_this_time; 
	/* EXEC SQL END DECLARE SECTION; */ 


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 

    /* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC SQL AT CUSTOMER_CARE DECLARE c_connection CURSOR FOR 
    SELECT 
		ACCOUNT_NO, 
		CLIENT_CLIENT_CODE, 
		PHONE_REG_PHONE_NO, 
		IMSI_NO, 
		IMEI_NO, 
		SIM_NO, 
		GROUP_GROUP_CODE, 
		PKG_PACKAGE_CODE,
		COMMENCEMENT_DATE,
		DISCONNECTED_DATE,
		CONTRACT_END_DATE
	FROM R_GPRS_CONNECTIONS_V; */ 
 
	//FROM R_RE_RATE_GPRS_CONNECTIONS_V;	// RE_RATE_SEARCH - 3
       
    /* EXEC SQL AT CUSTOMER_CARE OPEN c_connection; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0010;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )325;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 


	while (rows_this_time == rows_to_fetch) 
	{ 
        /* EXEC SQL AT CUSTOMER_CARE FOR :rows_to_fetch FETCH c_connection INTO :a INDICATOR :a_ind; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 11;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )rows_to_fetch;
        sqlstm.offset = (unsigned int  )353;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (         void  *)&a->account_no;
        sqlstm.sqhstl[0] = (unsigned int  )4;
        sqlstm.sqhsts[0] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[0] = (         void  *)&a_ind->account_no_ind;
        sqlstm.sqinds[0] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)a->client_code;
        sqlstm.sqhstl[1] = (unsigned int  )100;
        sqlstm.sqhsts[1] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[1] = (         void  *)&a_ind->client_code_ind;
        sqlstm.sqinds[1] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&a->phone_no;
        sqlstm.sqhstl[2] = (unsigned int  )4;
        sqlstm.sqhsts[2] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[2] = (         void  *)&a_ind->phone_no_ind;
        sqlstm.sqinds[2] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)a->imsi_no;
        sqlstm.sqhstl[3] = (unsigned int  )100;
        sqlstm.sqhsts[3] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[3] = (         void  *)&a_ind->imsi_no_ind;
        sqlstm.sqinds[3] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqharc[3] = (unsigned int   *)0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)a->imei_no;
        sqlstm.sqhstl[4] = (unsigned int  )100;
        sqlstm.sqhsts[4] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[4] = (         void  *)&a_ind->imei_no_ind;
        sqlstm.sqinds[4] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqharc[4] = (unsigned int   *)0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)a->sim_no;
        sqlstm.sqhstl[5] = (unsigned int  )100;
        sqlstm.sqhsts[5] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[5] = (         void  *)&a_ind->sim_no_ind;
        sqlstm.sqinds[5] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqharc[5] = (unsigned int   *)0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)a->group_code;
        sqlstm.sqhstl[6] = (unsigned int  )100;
        sqlstm.sqhsts[6] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[6] = (         void  *)&a_ind->group_code_ind;
        sqlstm.sqinds[6] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqharc[6] = (unsigned int   *)0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)a->package_code;
        sqlstm.sqhstl[7] = (unsigned int  )100;
        sqlstm.sqhsts[7] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[7] = (         void  *)&a_ind->package_code_ind;
        sqlstm.sqinds[7] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqharc[7] = (unsigned int   *)0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (         void  *)a->commencement_date;
        sqlstm.sqhstl[8] = (unsigned int  )100;
        sqlstm.sqhsts[8] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[8] = (         void  *)&a_ind->commencement_date_ind;
        sqlstm.sqinds[8] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[8] = (unsigned int  )0;
        sqlstm.sqharc[8] = (unsigned int   *)0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqhstv[9] = (         void  *)a->disconnected_date;
        sqlstm.sqhstl[9] = (unsigned int  )100;
        sqlstm.sqhsts[9] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[9] = (         void  *)&a_ind->disconnected_date_ind;
        sqlstm.sqinds[9] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[9] = (unsigned int  )0;
        sqlstm.sqharc[9] = (unsigned int   *)0;
        sqlstm.sqadto[9] = (unsigned short )0;
        sqlstm.sqtdso[9] = (unsigned short )0;
        sqlstm.sqhstv[10] = (         void  *)a->contract_end_date;
        sqlstm.sqhstl[10] = (unsigned int  )100;
        sqlstm.sqhsts[10] = (         int  )sizeof(struct connection);
        sqlstm.sqindv[10] = (         void  *)&a_ind->contract_end_date_ind;
        sqlstm.sqinds[10] = (         int  )sizeof(struct connection_ind);
        sqlstm.sqharm[10] = (unsigned int  )0;
        sqlstm.sqharc[10] = (unsigned int   *)0;
        sqlstm.sqadto[10] = (unsigned short )0;
        sqlstm.sqtdso[10] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

  
		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
		//printf(" this=%d before=%d to_fetch=%d\n", rows_this_time, rows_before, rows_to_fetch);

		connection_detail cd;
		for (i=0; i<rows_this_time; i++) 
		{ 
			//handling null fetches
			
			a[i].account_no = (a_ind[i].account_no_ind < 0) ? 0 : a[i].account_no ;
			strcpy(a[i].client_code,
				  ((a_ind[i].client_code_ind < 0) ? "UNDEF":a[i].client_code));
			a[i].phone_no = (a_ind[i].phone_no_ind < 0) ? 0 : a[i].phone_no ;
			strcpy(a[i].imsi_no,
				  ((a_ind[i].imsi_no_ind < 0) ? "UNDEF":a[i].imsi_no));
			strcpy(a[i].imei_no,
				  ((a_ind[i].imei_no_ind < 0) ? "UNDEF":a[i].imei_no));
			strcpy(a[i].sim_no,
				  ((a_ind[i].sim_no_ind < 0) ? "UNDEF":a[i].sim_no));
			strcpy(a[i].group_code,
				  ((a_ind[i].group_code_ind < 0) ? "UNDEF":a[i].group_code));
			strcpy(a[i].package_code,
				  ((a_ind[i].package_code_ind < 0) ? "UNDEF":a[i].package_code));
			strcpy(a[i].commencement_date,
				  ((a_ind[i].commencement_date_ind < 0) ? "UNDEF":a[i].commencement_date));
			strcpy(a[i].disconnected_date,
				  ((a_ind[i].disconnected_date_ind < 0) ? "UNDEF":a[i].disconnected_date));
			strcpy(a[i].contract_end_date,
				  ((a_ind[i].contract_end_date_ind < 0) ? "UNDEF":a[i].contract_end_date));


			cd.account_no			= a[i].account_no;
			cd.client_code			= a[i].client_code;
			cd.phone_no				= a[i].phone_no-77000000;
			cd.imei_no				= a[i].imei_no; 
			cd.sim_no				= a[i].sim_no; 
			cd.group_code			= a[i].group_code; 
			cd.package_code			= a[i].package_code;
			//cd.group_rate_plan_id	= a[i].group_rate_plan_id;
			cd.gross_charge_for_run	= 0;

			insert(a[i].imsi_no, cd );
			gprs_imsi_map[a[i].imsi_no] = cd;
			//cout<<cd<<endl;
		}
    } 

    /* EXEC SQL AT CUSTOMER_CARE CLOSE c_connection; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 11;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )425;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    printf("\n %d connections loaded.\n\n",rows_before);
}


void db_insert_rated_cdr(int cdr_count)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

 
static struct db_cdr
{
	int file_id; 								//	number(9)
	int file_pos;								//	number(9)
	int account_no;								//	number(10)
	float units;								//	number(11,2)
	float charge;								//	number(11,2)
	
	int	data_volume;							//              NUMBER (9), 
	int record_type;							//                NUMBER (3), 
	char	uplink_downlink[BUF_LEN];			//           VARCHAR2 (10), 
	char	call_time[BUF_LEN];					//                 VARCHAR2 (14), 
	char	sgsn_address[BUF_LEN];				//              VARCHAR2 (20), 
	char	served_pdp_address[BUF_LEN];		//        VARCHAR2 (20), 
	char	ggsn_address[BUF_LEN];				//              VARCHAR2 (20), 
	char	qos_requested_sgsn[BUF_LEN];		//        VARCHAR2 (30), 
	char	qos_negotiated_sgsn[BUF_LEN];		//       VARCHAR2 (30), 
	char	qos_negotiated_ggsn[BUF_LEN];		//       VARCHAR2 (30), 
	int	pdp_type;								//                   NUMBER (3), 
	int	change_condition_sgsn;					//      NUMBER (3), 
	int	change_condition_ggsn;					//      NUMBER (3), 
	char	change_time_sgsn[BUF_LEN];			//          VARCHAR2 (20), 
	char	change_time_ggsn[BUF_LEN];			//          VARCHAR2 (20), 
	char	record_opening_time_ggsn[BUF_LEN];	//  VARCHAR2 (20), 
	int	ms_network_capability;					//      NUMBER (10), 
	int	location_area_code;						//         NUMBER (10), 
	int	cell_identity;							//              NUMBER (10), 
	int	data_uplink_ggsn;						//           NUMBER (30), 
	int	data_downlink_ggsn;						//         NUMBER (30), 
	int	charging_id;							//                NUMBER (20), 
	int	duration;								//                   NUMBER (20), 
	int	cause_for_rec_closing;					//      NUMBER (20), 
	int	record_sequence_no;						//         NUMBER (20), 
	char	routing_area[BUF_LEN];				//              VARCHAR2 (20), 
	char	access_point_name[BUF_LEN];			//         VARCHAR2 (50), 
	char	node_id[BUF_LEN];					//                  VARCHAR2 (20), 
	char	served_msisdn[BUF_LEN];				//             VARCHAR2 (30), 
	char	rate_rule_id[BUF_LEN];				//              VARCHAR2 (20), 
	char	imsi[BUF_LEN];						//                      VARCHAR2 (20), 
	int		result_code;					//                NUMBER (3), 
	char	discount_type[BUF_LEN];				//             VARCHAR2 (1)

} a[INSERT_SIZE]; 

	int rows_to_insert;

/* EXEC SQL END DECLARE SECTION; */ 

	rows_to_insert = cdr_count;

	char buf[100]; 
	for(int j=0; j<INSERT_SIZE; j++)
	{
		a[j].file_pos = 0;
	}

	for(int i=0; i<INSERT_SIZE; i++)
	{
		
		a[i].file_id =  gsm_cdr_block[i].file_id; 
		a[i].file_pos = gsm_cdr_block[i].file_pos;
		a[i].account_no = gsm_cdr_block[i].connection_d.account_no;
		a[i].units = gsm_cdr_block[i].billing.units;
		a[i].charge = gsm_cdr_block[i].billing.charge;

		//sprintf(buf,"%04d%02d%02d%02d%02d%02d",d.year,d.month,d.day,t.hour,t.min,t.second);	
		//strcpy(a[i].call_time, buf);

		a[i].data_volume = gsm_cdr_block[i].data_volume;							//              NUMBER (9), 
		a[i].record_type = gsm_cdr_block[i].recordType;							//                NUMBER (3), 
		strcpy(a[i].uplink_downlink, gsm_cdr_block[i].type_of_call.substr(0,10).c_str());			//           VARCHAR2 (10), 
		strcpy(a[i].call_time, gsm_cdr_block[i].circuit_allocation_time_stamp.substr(0,14).c_str());					//                 VARCHAR2 (14), 
		sprintf(a[i].sgsn_address,"%d.%d.%d.%d",gsm_cdr_block[i].sgsnAddress.first_int,gsm_cdr_block[i].sgsnAddress.second_int,gsm_cdr_block[i].sgsnAddress.third_int,gsm_cdr_block[i].sgsnAddress.fourth_int);
		sprintf(a[i].ggsn_address,"%d.%d.%d.%d",gsm_cdr_block[i].ggsnAddress.first_int,gsm_cdr_block[i].ggsnAddress.second_int,gsm_cdr_block[i].ggsnAddress.third_int,gsm_cdr_block[i].ggsnAddress.fourth_int);
		sprintf(a[i].served_pdp_address,"%d.%d.%d.%d",gsm_cdr_block[i].servedPDPAddress.first_int,gsm_cdr_block[i].servedPDPAddress.second_int,gsm_cdr_block[i].servedPDPAddress.third_int,gsm_cdr_block[i].servedPDPAddress.fourth_int);
	 
		sprintf(a[i].qos_requested_sgsn,"%d,%d,%d,%d.%d",gsm_cdr_block[i].qosRequested_SGSN.reliability,gsm_cdr_block[i].qosRequested_SGSN.delay,gsm_cdr_block[i].qosRequested_SGSN.precedence,gsm_cdr_block[i].qosRequested_SGSN.peakThroughput,gsm_cdr_block[i].qosRequested_SGSN.meanThroughput);
		sprintf(a[i].qos_negotiated_sgsn,"%d,%d,%d,%d.%d",gsm_cdr_block[i].qosNegotiated_SGSN.reliability,gsm_cdr_block[i].qosNegotiated_SGSN.delay,gsm_cdr_block[i].qosNegotiated_SGSN.precedence,gsm_cdr_block[i].qosNegotiated_SGSN.peakThroughput,gsm_cdr_block[i].qosNegotiated_SGSN.meanThroughput);
		sprintf(a[i].qos_negotiated_ggsn,"%d,%d,%d,%d.%d",gsm_cdr_block[i].qosNegotiated_GGSN.reliability,gsm_cdr_block[i].qosNegotiated_GGSN.delay,gsm_cdr_block[i].qosNegotiated_GGSN.precedence,gsm_cdr_block[i].qosNegotiated_GGSN.peakThroughput,gsm_cdr_block[i].qosNegotiated_GGSN.meanThroughput);
		
		a[i].pdp_type = gsm_cdr_block[i].pdpType;								//                   NUMBER (3), 
		a[i].change_condition_sgsn = gsm_cdr_block[i].changeCondition_SGSN;					//      NUMBER (3), 
		a[i].change_condition_ggsn = gsm_cdr_block[i].changeCondition_GGSN;					//      NUMBER (3), 
		strcpy(a[i].change_time_sgsn, gsm_cdr_block[i].changeTime_SGSN);		//          VARCHAR2 (20), 
		strcpy(a[i].change_time_ggsn, gsm_cdr_block[i].changeTime_GGSN);			//          VARCHAR2 (20), 
		strcpy(a[i].record_opening_time_ggsn, gsm_cdr_block[i].recordOpeningTime_GGSN);	//  VARCHAR2 (20), 
		a[i].ms_network_capability = gsm_cdr_block[i].msNetworkCapability;					//      NUMBER (10), 
		a[i].location_area_code = gsm_cdr_block[i].locationAreaCode;						//         NUMBER (10), 
		a[i].cell_identity = gsm_cdr_block[i].cellIdentity;							//              NUMBER (10), 
		a[i].data_uplink_ggsn = gsm_cdr_block[i].dataUplink_GGSN;						//           NUMBER (30), 
		a[i].data_downlink_ggsn = gsm_cdr_block[i].dataDownlink_GGSN;						//         NUMBER (30), 
		a[i].charging_id = gsm_cdr_block[i].chargingID;							//                NUMBER (20), 
		a[i].duration = gsm_cdr_block[i].duration;								//                   NUMBER (20), 
		a[i].cause_for_rec_closing = gsm_cdr_block[i].causeForRecClosing;					//      NUMBER (20), 
		a[i].record_sequence_no = gsm_cdr_block[i].recordSequenceNumber;						//         NUMBER (20), 
		strcpy(a[i].routing_area, gsm_cdr_block[i].routingArea);				//              VARCHAR2 (20), 
		strcpy(a[i].access_point_name, gsm_cdr_block[i].accessPointName);			//         VARCHAR2 (50), 
		strcpy(a[i].node_id, gsm_cdr_block[i].nodeID);					//                  VARCHAR2 (20), 
		strcpy(a[i].served_msisdn, gsm_cdr_block[i].servedMSISDN);				//             VARCHAR2 (30), 
		strcpy(a[i].rate_rule_id, gsm_cdr_block[i].billing.rate_rule_id.substr(0,20).c_str());

		strcpy(a[i].imsi, gsm_cdr_block[i].servedIMSI);													//
		
		a[i].result_code = gsm_cdr_block[i].billing.rate_result;
		strcpy(a[i].discount_type, gsm_cdr_block[i].billing.discount_type.substr(0,1).c_str());

		
		
		// allocate cdr to correct partion
		/*
		if(gsm_cdr_block[i].billing.rate_result != R_RATED)
		{
			a[i].part = 3;	// unrated
			sprintf(buf,"%d",gsm_cdr_block[i].call_partner_extension);
			string a_s;
			a_s = gsm_cdr_block[i].link_information;
			a_s = a_s + ":";
			a_s = a_s + buf;
			strcpy(a[i].rate_rule_id, a_s.c_str());
		}
		// roaming zero & non zero charge cdr's 
		else if (gsm_cdr_block[i].billing.rate_result == R_RATED && gsm_cdr_block[i].rate_group_id == "ROAM") 
			a[i].part = 1;	// roaming
		else if (gsm_cdr_block[i].billing.rate_result == R_RATED && a[i].charge == 0)
			a[i].part = 2;	// zero charge
		else
			a[i].part = 0;	// normal
		*/
	} 

// ------------------
/*

	cout<<" ----------------- rows to insert "<<rows_to_insert<<endl;
	//for(int k=0; k<INSERT_SIZE; k++)
	for(int k=0; k<2; k++)
	{
		cout<<" "<<k<<"="<<a[k].file_pos ;
	}

	//for(int l=0; l<INSERT_SIZE; l++)
	for(int l=0; l<2; l++)
	{
		cout<<l<<" file_id"<<a[l].file_id<<endl; 								//	number(9)
		cout<<l<<" file_pos"<<a[l].file_pos<<endl;								//	number(9)
		cout<<l<<" account_no"<<a[l].account_no <<endl;								//	number(10)
		cout<<l<<" termination_type"<<a[l].termination_type<<endl;						//	number(3)
		cout<<l<<" units"<<a[l].units<<endl;								//	number(11,2)
		cout<<l<<" charge"<<a[l].charge<<endl;								//	number(11,2)
		cout<<l<<" call_partner_id"<<a[l].call_partner_id <<endl; 				//	varchar2(20)
		cout<<l<<" duration"<<a[l].duration <<endl;								//	number(9)
		cout<<l<<" call_time"<<a[l].call_time <<endl;					//	varchar2(14)
		cout<<l<<" ms_location"<<a[l].ms_location <<endl;					//	varchar2(20)
		cout<<l<<" msc_identity"<<a[l].msc_identity <<endl;					//	varchar2(20)
		cout<<l<<" call_type_id"<<a[l].call_type_id <<endl;							//	number(3)
		cout<<l<<" network_id"<<a[l].network_id <<endl; 					//	varchar2(5)
		cout<<l<<" bearer_capability"<<a[l].bearer_capability <<endl;			//	varchar2(10)
		cout<<l<<" bearer_service"<<a[l].bearer_service <<endl; 						//	number(3)
		cout<<l<<" rate_rule_id"<<a[l]. rate_rule_id<<endl;					//	varchar2(15)
		cout<<l<<" service_type_id"<<a[l].service_type_id <<endl;						//	number(3)
		cout<<l<<" locale_id"<<a[l].locale_id<<endl;								//	number(3)
		cout<<l<<" imsi"<<a[l].imsi <<endl;							//	varchar2(20)
		cout<<l<<" imei"<<a[l].imei<<endl;							// varchar2(20)
		cout<<l<<" result_code"<<a[l].result_code <<endl;
		cout<<l<<" discount_type"<<a[l].discount_type <<endl;				// varchar2(1)
		cout<<l<<" mcc"<<a[l].mcc <<endl;							// varchar2(5)
		cout<<l<<" mnc"<<a[l].mnc <<endl;							// varchar2(3)
		cout<<l<<" lac"<<a[l].lac<<endl;									// number(5)
		cout<<l<<" ci"<<a[l].ci<<endl; 									// number(5)
		cout<<l<<" part"<<a[l].part <<endl;
		cout<<l<<" charging_indicator"<<a[l].charging_indicator <<endl;						// number(2)
	}
*/
//------

/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

/* EXEC SQL AT RATING FOR :rows_to_insert INSERT INTO R_RATED_GPRS_CDR VALUES (:a); */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 10;
sqlstm.arrsiz = 38;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "insert into R_RATED_GPRS_CDR values (:s1 ,:s2 ,:s3 ,:s4 ,:s5 \
,:s6 ,:s7 ,:s8 ,:s9 ,:s10 ,:s11 ,:s12 ,:s13 ,:s14 ,:s15 ,:s16 ,:s17 ,:s18 ,:s1\
9 ,:s20 ,:s21 ,:s22 ,:s23 ,:s24 ,:s25 ,:s26 ,:s27 ,:s28 ,:s29 ,:s30 ,:s31 ,:s3\
2 ,:s33 ,:s34 ,:s35 ,:s36 ,:s37 ,:s38 )";
sqlstm.iters = (unsigned int  )rows_to_insert;
sqlstm.offset = (unsigned int  )453;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlstm.sqhstv[0] = (         void  *)&a->file_id;
sqlstm.sqhstl[0] = (unsigned int  )4;
sqlstm.sqhsts[0] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[0] = (         void  *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned int  )0;
sqlstm.sqharc[0] = (unsigned int   *)0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (         void  *)&a->file_pos;
sqlstm.sqhstl[1] = (unsigned int  )4;
sqlstm.sqhsts[1] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[1] = (         void  *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned int  )0;
sqlstm.sqharc[1] = (unsigned int   *)0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (         void  *)&a->account_no;
sqlstm.sqhstl[2] = (unsigned int  )4;
sqlstm.sqhsts[2] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[2] = (         void  *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned int  )0;
sqlstm.sqharc[2] = (unsigned int   *)0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (         void  *)&a->units;
sqlstm.sqhstl[3] = (unsigned int  )4;
sqlstm.sqhsts[3] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[3] = (         void  *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned int  )0;
sqlstm.sqharc[3] = (unsigned int   *)0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (         void  *)&a->charge;
sqlstm.sqhstl[4] = (unsigned int  )4;
sqlstm.sqhsts[4] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[4] = (         void  *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned int  )0;
sqlstm.sqharc[4] = (unsigned int   *)0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (         void  *)&a->data_volume;
sqlstm.sqhstl[5] = (unsigned int  )4;
sqlstm.sqhsts[5] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[5] = (         void  *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned int  )0;
sqlstm.sqharc[5] = (unsigned int   *)0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqhstv[6] = (         void  *)&a->record_type;
sqlstm.sqhstl[6] = (unsigned int  )4;
sqlstm.sqhsts[6] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[6] = (         void  *)0;
sqlstm.sqinds[6] = (         int  )0;
sqlstm.sqharm[6] = (unsigned int  )0;
sqlstm.sqharc[6] = (unsigned int   *)0;
sqlstm.sqadto[6] = (unsigned short )0;
sqlstm.sqtdso[6] = (unsigned short )0;
sqlstm.sqhstv[7] = (         void  *)a->uplink_downlink;
sqlstm.sqhstl[7] = (unsigned int  )100;
sqlstm.sqhsts[7] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[7] = (         void  *)0;
sqlstm.sqinds[7] = (         int  )0;
sqlstm.sqharm[7] = (unsigned int  )0;
sqlstm.sqharc[7] = (unsigned int   *)0;
sqlstm.sqadto[7] = (unsigned short )0;
sqlstm.sqtdso[7] = (unsigned short )0;
sqlstm.sqhstv[8] = (         void  *)a->call_time;
sqlstm.sqhstl[8] = (unsigned int  )100;
sqlstm.sqhsts[8] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[8] = (         void  *)0;
sqlstm.sqinds[8] = (         int  )0;
sqlstm.sqharm[8] = (unsigned int  )0;
sqlstm.sqharc[8] = (unsigned int   *)0;
sqlstm.sqadto[8] = (unsigned short )0;
sqlstm.sqtdso[8] = (unsigned short )0;
sqlstm.sqhstv[9] = (         void  *)a->sgsn_address;
sqlstm.sqhstl[9] = (unsigned int  )100;
sqlstm.sqhsts[9] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[9] = (         void  *)0;
sqlstm.sqinds[9] = (         int  )0;
sqlstm.sqharm[9] = (unsigned int  )0;
sqlstm.sqharc[9] = (unsigned int   *)0;
sqlstm.sqadto[9] = (unsigned short )0;
sqlstm.sqtdso[9] = (unsigned short )0;
sqlstm.sqhstv[10] = (         void  *)a->served_pdp_address;
sqlstm.sqhstl[10] = (unsigned int  )100;
sqlstm.sqhsts[10] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[10] = (         void  *)0;
sqlstm.sqinds[10] = (         int  )0;
sqlstm.sqharm[10] = (unsigned int  )0;
sqlstm.sqharc[10] = (unsigned int   *)0;
sqlstm.sqadto[10] = (unsigned short )0;
sqlstm.sqtdso[10] = (unsigned short )0;
sqlstm.sqhstv[11] = (         void  *)a->ggsn_address;
sqlstm.sqhstl[11] = (unsigned int  )100;
sqlstm.sqhsts[11] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[11] = (         void  *)0;
sqlstm.sqinds[11] = (         int  )0;
sqlstm.sqharm[11] = (unsigned int  )0;
sqlstm.sqharc[11] = (unsigned int   *)0;
sqlstm.sqadto[11] = (unsigned short )0;
sqlstm.sqtdso[11] = (unsigned short )0;
sqlstm.sqhstv[12] = (         void  *)a->qos_requested_sgsn;
sqlstm.sqhstl[12] = (unsigned int  )100;
sqlstm.sqhsts[12] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[12] = (         void  *)0;
sqlstm.sqinds[12] = (         int  )0;
sqlstm.sqharm[12] = (unsigned int  )0;
sqlstm.sqharc[12] = (unsigned int   *)0;
sqlstm.sqadto[12] = (unsigned short )0;
sqlstm.sqtdso[12] = (unsigned short )0;
sqlstm.sqhstv[13] = (         void  *)a->qos_negotiated_sgsn;
sqlstm.sqhstl[13] = (unsigned int  )100;
sqlstm.sqhsts[13] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[13] = (         void  *)0;
sqlstm.sqinds[13] = (         int  )0;
sqlstm.sqharm[13] = (unsigned int  )0;
sqlstm.sqharc[13] = (unsigned int   *)0;
sqlstm.sqadto[13] = (unsigned short )0;
sqlstm.sqtdso[13] = (unsigned short )0;
sqlstm.sqhstv[14] = (         void  *)a->qos_negotiated_ggsn;
sqlstm.sqhstl[14] = (unsigned int  )100;
sqlstm.sqhsts[14] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[14] = (         void  *)0;
sqlstm.sqinds[14] = (         int  )0;
sqlstm.sqharm[14] = (unsigned int  )0;
sqlstm.sqharc[14] = (unsigned int   *)0;
sqlstm.sqadto[14] = (unsigned short )0;
sqlstm.sqtdso[14] = (unsigned short )0;
sqlstm.sqhstv[15] = (         void  *)&a->pdp_type;
sqlstm.sqhstl[15] = (unsigned int  )4;
sqlstm.sqhsts[15] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[15] = (         void  *)0;
sqlstm.sqinds[15] = (         int  )0;
sqlstm.sqharm[15] = (unsigned int  )0;
sqlstm.sqharc[15] = (unsigned int   *)0;
sqlstm.sqadto[15] = (unsigned short )0;
sqlstm.sqtdso[15] = (unsigned short )0;
sqlstm.sqhstv[16] = (         void  *)&a->change_condition_sgsn;
sqlstm.sqhstl[16] = (unsigned int  )4;
sqlstm.sqhsts[16] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[16] = (         void  *)0;
sqlstm.sqinds[16] = (         int  )0;
sqlstm.sqharm[16] = (unsigned int  )0;
sqlstm.sqharc[16] = (unsigned int   *)0;
sqlstm.sqadto[16] = (unsigned short )0;
sqlstm.sqtdso[16] = (unsigned short )0;
sqlstm.sqhstv[17] = (         void  *)&a->change_condition_ggsn;
sqlstm.sqhstl[17] = (unsigned int  )4;
sqlstm.sqhsts[17] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[17] = (         void  *)0;
sqlstm.sqinds[17] = (         int  )0;
sqlstm.sqharm[17] = (unsigned int  )0;
sqlstm.sqharc[17] = (unsigned int   *)0;
sqlstm.sqadto[17] = (unsigned short )0;
sqlstm.sqtdso[17] = (unsigned short )0;
sqlstm.sqhstv[18] = (         void  *)a->change_time_sgsn;
sqlstm.sqhstl[18] = (unsigned int  )100;
sqlstm.sqhsts[18] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[18] = (         void  *)0;
sqlstm.sqinds[18] = (         int  )0;
sqlstm.sqharm[18] = (unsigned int  )0;
sqlstm.sqharc[18] = (unsigned int   *)0;
sqlstm.sqadto[18] = (unsigned short )0;
sqlstm.sqtdso[18] = (unsigned short )0;
sqlstm.sqhstv[19] = (         void  *)a->change_time_ggsn;
sqlstm.sqhstl[19] = (unsigned int  )100;
sqlstm.sqhsts[19] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[19] = (         void  *)0;
sqlstm.sqinds[19] = (         int  )0;
sqlstm.sqharm[19] = (unsigned int  )0;
sqlstm.sqharc[19] = (unsigned int   *)0;
sqlstm.sqadto[19] = (unsigned short )0;
sqlstm.sqtdso[19] = (unsigned short )0;
sqlstm.sqhstv[20] = (         void  *)a->record_opening_time_ggsn;
sqlstm.sqhstl[20] = (unsigned int  )100;
sqlstm.sqhsts[20] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[20] = (         void  *)0;
sqlstm.sqinds[20] = (         int  )0;
sqlstm.sqharm[20] = (unsigned int  )0;
sqlstm.sqharc[20] = (unsigned int   *)0;
sqlstm.sqadto[20] = (unsigned short )0;
sqlstm.sqtdso[20] = (unsigned short )0;
sqlstm.sqhstv[21] = (         void  *)&a->ms_network_capability;
sqlstm.sqhstl[21] = (unsigned int  )4;
sqlstm.sqhsts[21] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[21] = (         void  *)0;
sqlstm.sqinds[21] = (         int  )0;
sqlstm.sqharm[21] = (unsigned int  )0;
sqlstm.sqharc[21] = (unsigned int   *)0;
sqlstm.sqadto[21] = (unsigned short )0;
sqlstm.sqtdso[21] = (unsigned short )0;
sqlstm.sqhstv[22] = (         void  *)&a->location_area_code;
sqlstm.sqhstl[22] = (unsigned int  )4;
sqlstm.sqhsts[22] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[22] = (         void  *)0;
sqlstm.sqinds[22] = (         int  )0;
sqlstm.sqharm[22] = (unsigned int  )0;
sqlstm.sqharc[22] = (unsigned int   *)0;
sqlstm.sqadto[22] = (unsigned short )0;
sqlstm.sqtdso[22] = (unsigned short )0;
sqlstm.sqhstv[23] = (         void  *)&a->cell_identity;
sqlstm.sqhstl[23] = (unsigned int  )4;
sqlstm.sqhsts[23] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[23] = (         void  *)0;
sqlstm.sqinds[23] = (         int  )0;
sqlstm.sqharm[23] = (unsigned int  )0;
sqlstm.sqharc[23] = (unsigned int   *)0;
sqlstm.sqadto[23] = (unsigned short )0;
sqlstm.sqtdso[23] = (unsigned short )0;
sqlstm.sqhstv[24] = (         void  *)&a->data_uplink_ggsn;
sqlstm.sqhstl[24] = (unsigned int  )4;
sqlstm.sqhsts[24] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[24] = (         void  *)0;
sqlstm.sqinds[24] = (         int  )0;
sqlstm.sqharm[24] = (unsigned int  )0;
sqlstm.sqharc[24] = (unsigned int   *)0;
sqlstm.sqadto[24] = (unsigned short )0;
sqlstm.sqtdso[24] = (unsigned short )0;
sqlstm.sqhstv[25] = (         void  *)&a->data_downlink_ggsn;
sqlstm.sqhstl[25] = (unsigned int  )4;
sqlstm.sqhsts[25] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[25] = (         void  *)0;
sqlstm.sqinds[25] = (         int  )0;
sqlstm.sqharm[25] = (unsigned int  )0;
sqlstm.sqharc[25] = (unsigned int   *)0;
sqlstm.sqadto[25] = (unsigned short )0;
sqlstm.sqtdso[25] = (unsigned short )0;
sqlstm.sqhstv[26] = (         void  *)&a->charging_id;
sqlstm.sqhstl[26] = (unsigned int  )4;
sqlstm.sqhsts[26] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[26] = (         void  *)0;
sqlstm.sqinds[26] = (         int  )0;
sqlstm.sqharm[26] = (unsigned int  )0;
sqlstm.sqharc[26] = (unsigned int   *)0;
sqlstm.sqadto[26] = (unsigned short )0;
sqlstm.sqtdso[26] = (unsigned short )0;
sqlstm.sqhstv[27] = (         void  *)&a->duration;
sqlstm.sqhstl[27] = (unsigned int  )4;
sqlstm.sqhsts[27] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[27] = (         void  *)0;
sqlstm.sqinds[27] = (         int  )0;
sqlstm.sqharm[27] = (unsigned int  )0;
sqlstm.sqharc[27] = (unsigned int   *)0;
sqlstm.sqadto[27] = (unsigned short )0;
sqlstm.sqtdso[27] = (unsigned short )0;
sqlstm.sqhstv[28] = (         void  *)&a->cause_for_rec_closing;
sqlstm.sqhstl[28] = (unsigned int  )4;
sqlstm.sqhsts[28] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[28] = (         void  *)0;
sqlstm.sqinds[28] = (         int  )0;
sqlstm.sqharm[28] = (unsigned int  )0;
sqlstm.sqharc[28] = (unsigned int   *)0;
sqlstm.sqadto[28] = (unsigned short )0;
sqlstm.sqtdso[28] = (unsigned short )0;
sqlstm.sqhstv[29] = (         void  *)&a->record_sequence_no;
sqlstm.sqhstl[29] = (unsigned int  )4;
sqlstm.sqhsts[29] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[29] = (         void  *)0;
sqlstm.sqinds[29] = (         int  )0;
sqlstm.sqharm[29] = (unsigned int  )0;
sqlstm.sqharc[29] = (unsigned int   *)0;
sqlstm.sqadto[29] = (unsigned short )0;
sqlstm.sqtdso[29] = (unsigned short )0;
sqlstm.sqhstv[30] = (         void  *)a->routing_area;
sqlstm.sqhstl[30] = (unsigned int  )100;
sqlstm.sqhsts[30] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[30] = (         void  *)0;
sqlstm.sqinds[30] = (         int  )0;
sqlstm.sqharm[30] = (unsigned int  )0;
sqlstm.sqharc[30] = (unsigned int   *)0;
sqlstm.sqadto[30] = (unsigned short )0;
sqlstm.sqtdso[30] = (unsigned short )0;
sqlstm.sqhstv[31] = (         void  *)a->access_point_name;
sqlstm.sqhstl[31] = (unsigned int  )100;
sqlstm.sqhsts[31] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[31] = (         void  *)0;
sqlstm.sqinds[31] = (         int  )0;
sqlstm.sqharm[31] = (unsigned int  )0;
sqlstm.sqharc[31] = (unsigned int   *)0;
sqlstm.sqadto[31] = (unsigned short )0;
sqlstm.sqtdso[31] = (unsigned short )0;
sqlstm.sqhstv[32] = (         void  *)a->node_id;
sqlstm.sqhstl[32] = (unsigned int  )100;
sqlstm.sqhsts[32] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[32] = (         void  *)0;
sqlstm.sqinds[32] = (         int  )0;
sqlstm.sqharm[32] = (unsigned int  )0;
sqlstm.sqharc[32] = (unsigned int   *)0;
sqlstm.sqadto[32] = (unsigned short )0;
sqlstm.sqtdso[32] = (unsigned short )0;
sqlstm.sqhstv[33] = (         void  *)a->served_msisdn;
sqlstm.sqhstl[33] = (unsigned int  )100;
sqlstm.sqhsts[33] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[33] = (         void  *)0;
sqlstm.sqinds[33] = (         int  )0;
sqlstm.sqharm[33] = (unsigned int  )0;
sqlstm.sqharc[33] = (unsigned int   *)0;
sqlstm.sqadto[33] = (unsigned short )0;
sqlstm.sqtdso[33] = (unsigned short )0;
sqlstm.sqhstv[34] = (         void  *)a->rate_rule_id;
sqlstm.sqhstl[34] = (unsigned int  )100;
sqlstm.sqhsts[34] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[34] = (         void  *)0;
sqlstm.sqinds[34] = (         int  )0;
sqlstm.sqharm[34] = (unsigned int  )0;
sqlstm.sqharc[34] = (unsigned int   *)0;
sqlstm.sqadto[34] = (unsigned short )0;
sqlstm.sqtdso[34] = (unsigned short )0;
sqlstm.sqhstv[35] = (         void  *)a->imsi;
sqlstm.sqhstl[35] = (unsigned int  )100;
sqlstm.sqhsts[35] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[35] = (         void  *)0;
sqlstm.sqinds[35] = (         int  )0;
sqlstm.sqharm[35] = (unsigned int  )0;
sqlstm.sqharc[35] = (unsigned int   *)0;
sqlstm.sqadto[35] = (unsigned short )0;
sqlstm.sqtdso[35] = (unsigned short )0;
sqlstm.sqhstv[36] = (         void  *)&a->result_code;
sqlstm.sqhstl[36] = (unsigned int  )4;
sqlstm.sqhsts[36] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[36] = (         void  *)0;
sqlstm.sqinds[36] = (         int  )0;
sqlstm.sqharm[36] = (unsigned int  )0;
sqlstm.sqharc[36] = (unsigned int   *)0;
sqlstm.sqadto[36] = (unsigned short )0;
sqlstm.sqtdso[36] = (unsigned short )0;
sqlstm.sqhstv[37] = (         void  *)a->discount_type;
sqlstm.sqhstl[37] = (unsigned int  )100;
sqlstm.sqhsts[37] = (         int  )sizeof(struct db_cdr);
sqlstm.sqindv[37] = (         void  *)0;
sqlstm.sqinds[37] = (         int  )0;
sqlstm.sqharm[37] = (unsigned int  )0;
sqlstm.sqharc[37] = (unsigned int   *)0;
sqlstm.sqadto[37] = (unsigned short )0;
sqlstm.sqtdso[37] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


//EXEC SQL AT RATING FOR :rows_to_insert INSERT INTO R_RE_RATED_GPRS_CDR VALUES (:a);	// RE_RATE_SEARCH - 4

/* EXEC SQL AT RATING COMMIT; */ 

{
struct sqlexd sqlstm;

sqlstm.sqlvsn = 10;
sqlstm.arrsiz = 38;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )626;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}


}



void holiday_priorities::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct time_band 
	{ 
		char	holiday_date[BUF_LEN]; 
		char	day_id[BUF_LEN];
		int		priority;
	} a, *hpp; 
	int i;
	/* EXEC SQL END DECLARE SECTION; */ 


	hpp=&a;
 	/* EXEC ORACLE OPTION (char_map = string); */ 


    /* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC SQL AT CUSTOMER_CARE DECLARE c_holiday_priority CURSOR FOR 
        SELECT HOLIDAY_DATE, DAY_ID, PRIORITY
            FROM r_holiday_priorities_v; */ 
 
       
    /* EXEC SQL AT CUSTOMER_CARE OPEN c_holiday_priority; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0013;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )647;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 



    for (i=0; ;i++) 
    { 
        /* EXEC SQL AT CUSTOMER_CARE FETCH c_holiday_priority INTO :hpp; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 38;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )675;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (         void  *)hpp->holiday_date;
        sqlstm.sqhstl[0] = (unsigned int  )100;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)hpp->day_id;
        sqlstm.sqhstl[1] = (unsigned int  )100;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&hpp->priority;
        sqlstm.sqhstl[2] = (unsigned int  )4;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 

#ifndef code_skip
		holiday_priority_key k;

		k.day_id=hpp->day_id;
		k.date.set_date(hpp->holiday_date);
		insert(k, hpp->priority);
#endif
    } 

    /* EXEC SQL AT CUSTOMER_CARE CLOSE c_holiday_priority; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )715;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    printf("\n %d holiday priorities loaded.\n\n",i);
}


void rate_groups::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct rate_group
	{ 
		char	rate_group_id[BUF_LEN];		// not null varchar2(5)
		char	re_rate_group_id[BUF_LEN];  // varchar2(5)
		int		time_threshold;				// not null number(3)
	} a, *rgp; 

	/* EXEC SQL END DECLARE SECTION; */ 


	int i;
	rgp=&a;
 
    /* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC SQL AT CUSTOMER_CARE DECLARE c_rate_group CURSOR FOR 
        SELECT	RATE_GROUP_ID, RE_RATE_GROUP_ID, TIME_THRESHOLD
            FROM R_RATE_GROUPS_V; */ 
 
       
    /* EXEC SQL AT CUSTOMER_CARE OPEN c_rate_group; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0014;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )743;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 
 

    for (i=0; ;i++) 
    { 
        /* EXEC SQL AT CUSTOMER_CARE FETCH c_rate_group INTO :rgp; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 38;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )771;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (         void  *)rgp->rate_group_id;
        sqlstm.sqhstl[0] = (unsigned int  )100;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)rgp->re_rate_group_id;
        sqlstm.sqhstl[1] = (unsigned int  )100;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&rgp->time_threshold;
        sqlstm.sqhstl[2] = (unsigned int  )4;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
		rate_group_data rgd;
		rgd.re_rate_group_id = rgp->re_rate_group_id; 
		rgd.time_threshold = rgp->time_threshold; 

		insert(rgp->rate_group_id, rgd);
    } 

    /* EXEC SQL AT CUSTOMER_CARE CLOSE c_rate_group; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )811;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    printf("\n %d  rate groups loaded.\n\n",i);
}


void rates::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct rate 
	{ 
		char	rate_group_id[BUF_LEN];
		char	rate_id[BUF_LEN];
		int		priority;
		char	default_rate[BUF_LEN];
		char	call_type_id[BUF_LEN];
		char	locale_id[BUF_LEN];
		char	day_id[BUF_LEN];
		char	route_group_id[BUF_LEN];
		char	net_group_id[BUF_LEN];
		char	service_type_id[BUF_LEN];
		char	time_band_group[BUF_LEN];
		char	time_band_type[BUF_LEN];
		char	time_block_id[BUF_LEN];
		char	discount_group_id[BUF_LEN];
		char	unit_rate_id[BUF_LEN];
		int		unit_duration;
		float	cost_unit;
		int		billable_duration;
		char	start_date[BUF_LEN];
		char	end_date[BUF_LEN];
		char	start_time[BUF_LEN];
		char	end_time[BUF_LEN];
		int		call_duration;
	} a, *rp; 
/* EXEC SQL END DECLARE SECTION; */ 


	int i;
	rp=&a;
 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC ORACLE OPTION (char_map = string); */ 

    /* EXEC SQL AT CUSTOMER_CARE DECLARE c_rate CURSOR FOR 
        SELECT	RATE_GROUP_ID, RATE_ID, PRIORITY,
				DEFAULT_RATE, CALL_TYPE_ID,
				LOCALE_ID, DAY_ID,
				ROUTE_GROUP_ID, NET_GROUP_ID,				
				SERVICE_TYPE_ID, TIME_BAND_GROUP,				
				TIME_BAND_TYPE, TIME_BLOCK_ID,				
				DISCOUNT_GROUP_ID, UNIT_RATE_ID,
				UNIT_DURATION, COST_UNIT, BILLABLE_DURATION,
				START_DATE,
				END_DATE,
				START_TIME,
				END_TIME,
				CALL_DURATION							 
            FROM R_RATE_RULE_GPRS_V; */ 
 
       
    /* EXEC SQL AT CUSTOMER_CARE OPEN c_rate; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0015;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )839;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 


    for (i=0; ;i++) 
    { 
        /* EXEC SQL AT CUSTOMER_CARE FETCH c_rate INTO :rp; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 38;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )867;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (         void  *)rp->rate_group_id;
        sqlstm.sqhstl[0] = (unsigned int  )100;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)rp->rate_id;
        sqlstm.sqhstl[1] = (unsigned int  )100;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&rp->priority;
        sqlstm.sqhstl[2] = (unsigned int  )4;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)rp->default_rate;
        sqlstm.sqhstl[3] = (unsigned int  )100;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)rp->call_type_id;
        sqlstm.sqhstl[4] = (unsigned int  )100;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)rp->locale_id;
        sqlstm.sqhstl[5] = (unsigned int  )100;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)rp->day_id;
        sqlstm.sqhstl[6] = (unsigned int  )100;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)rp->route_group_id;
        sqlstm.sqhstl[7] = (unsigned int  )100;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (         void  *)rp->net_group_id;
        sqlstm.sqhstl[8] = (unsigned int  )100;
        sqlstm.sqhsts[8] = (         int  )0;
        sqlstm.sqindv[8] = (         void  *)0;
        sqlstm.sqinds[8] = (         int  )0;
        sqlstm.sqharm[8] = (unsigned int  )0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqhstv[9] = (         void  *)rp->service_type_id;
        sqlstm.sqhstl[9] = (unsigned int  )100;
        sqlstm.sqhsts[9] = (         int  )0;
        sqlstm.sqindv[9] = (         void  *)0;
        sqlstm.sqinds[9] = (         int  )0;
        sqlstm.sqharm[9] = (unsigned int  )0;
        sqlstm.sqadto[9] = (unsigned short )0;
        sqlstm.sqtdso[9] = (unsigned short )0;
        sqlstm.sqhstv[10] = (         void  *)rp->time_band_group;
        sqlstm.sqhstl[10] = (unsigned int  )100;
        sqlstm.sqhsts[10] = (         int  )0;
        sqlstm.sqindv[10] = (         void  *)0;
        sqlstm.sqinds[10] = (         int  )0;
        sqlstm.sqharm[10] = (unsigned int  )0;
        sqlstm.sqadto[10] = (unsigned short )0;
        sqlstm.sqtdso[10] = (unsigned short )0;
        sqlstm.sqhstv[11] = (         void  *)rp->time_band_type;
        sqlstm.sqhstl[11] = (unsigned int  )100;
        sqlstm.sqhsts[11] = (         int  )0;
        sqlstm.sqindv[11] = (         void  *)0;
        sqlstm.sqinds[11] = (         int  )0;
        sqlstm.sqharm[11] = (unsigned int  )0;
        sqlstm.sqadto[11] = (unsigned short )0;
        sqlstm.sqtdso[11] = (unsigned short )0;
        sqlstm.sqhstv[12] = (         void  *)rp->time_block_id;
        sqlstm.sqhstl[12] = (unsigned int  )100;
        sqlstm.sqhsts[12] = (         int  )0;
        sqlstm.sqindv[12] = (         void  *)0;
        sqlstm.sqinds[12] = (         int  )0;
        sqlstm.sqharm[12] = (unsigned int  )0;
        sqlstm.sqadto[12] = (unsigned short )0;
        sqlstm.sqtdso[12] = (unsigned short )0;
        sqlstm.sqhstv[13] = (         void  *)rp->discount_group_id;
        sqlstm.sqhstl[13] = (unsigned int  )100;
        sqlstm.sqhsts[13] = (         int  )0;
        sqlstm.sqindv[13] = (         void  *)0;
        sqlstm.sqinds[13] = (         int  )0;
        sqlstm.sqharm[13] = (unsigned int  )0;
        sqlstm.sqadto[13] = (unsigned short )0;
        sqlstm.sqtdso[13] = (unsigned short )0;
        sqlstm.sqhstv[14] = (         void  *)rp->unit_rate_id;
        sqlstm.sqhstl[14] = (unsigned int  )100;
        sqlstm.sqhsts[14] = (         int  )0;
        sqlstm.sqindv[14] = (         void  *)0;
        sqlstm.sqinds[14] = (         int  )0;
        sqlstm.sqharm[14] = (unsigned int  )0;
        sqlstm.sqadto[14] = (unsigned short )0;
        sqlstm.sqtdso[14] = (unsigned short )0;
        sqlstm.sqhstv[15] = (         void  *)&rp->unit_duration;
        sqlstm.sqhstl[15] = (unsigned int  )4;
        sqlstm.sqhsts[15] = (         int  )0;
        sqlstm.sqindv[15] = (         void  *)0;
        sqlstm.sqinds[15] = (         int  )0;
        sqlstm.sqharm[15] = (unsigned int  )0;
        sqlstm.sqadto[15] = (unsigned short )0;
        sqlstm.sqtdso[15] = (unsigned short )0;
        sqlstm.sqhstv[16] = (         void  *)&rp->cost_unit;
        sqlstm.sqhstl[16] = (unsigned int  )4;
        sqlstm.sqhsts[16] = (         int  )0;
        sqlstm.sqindv[16] = (         void  *)0;
        sqlstm.sqinds[16] = (         int  )0;
        sqlstm.sqharm[16] = (unsigned int  )0;
        sqlstm.sqadto[16] = (unsigned short )0;
        sqlstm.sqtdso[16] = (unsigned short )0;
        sqlstm.sqhstv[17] = (         void  *)&rp->billable_duration;
        sqlstm.sqhstl[17] = (unsigned int  )4;
        sqlstm.sqhsts[17] = (         int  )0;
        sqlstm.sqindv[17] = (         void  *)0;
        sqlstm.sqinds[17] = (         int  )0;
        sqlstm.sqharm[17] = (unsigned int  )0;
        sqlstm.sqadto[17] = (unsigned short )0;
        sqlstm.sqtdso[17] = (unsigned short )0;
        sqlstm.sqhstv[18] = (         void  *)rp->start_date;
        sqlstm.sqhstl[18] = (unsigned int  )100;
        sqlstm.sqhsts[18] = (         int  )0;
        sqlstm.sqindv[18] = (         void  *)0;
        sqlstm.sqinds[18] = (         int  )0;
        sqlstm.sqharm[18] = (unsigned int  )0;
        sqlstm.sqadto[18] = (unsigned short )0;
        sqlstm.sqtdso[18] = (unsigned short )0;
        sqlstm.sqhstv[19] = (         void  *)rp->end_date;
        sqlstm.sqhstl[19] = (unsigned int  )100;
        sqlstm.sqhsts[19] = (         int  )0;
        sqlstm.sqindv[19] = (         void  *)0;
        sqlstm.sqinds[19] = (         int  )0;
        sqlstm.sqharm[19] = (unsigned int  )0;
        sqlstm.sqadto[19] = (unsigned short )0;
        sqlstm.sqtdso[19] = (unsigned short )0;
        sqlstm.sqhstv[20] = (         void  *)rp->start_time;
        sqlstm.sqhstl[20] = (unsigned int  )100;
        sqlstm.sqhsts[20] = (         int  )0;
        sqlstm.sqindv[20] = (         void  *)0;
        sqlstm.sqinds[20] = (         int  )0;
        sqlstm.sqharm[20] = (unsigned int  )0;
        sqlstm.sqadto[20] = (unsigned short )0;
        sqlstm.sqtdso[20] = (unsigned short )0;
        sqlstm.sqhstv[21] = (         void  *)rp->end_time;
        sqlstm.sqhstl[21] = (unsigned int  )100;
        sqlstm.sqhsts[21] = (         int  )0;
        sqlstm.sqindv[21] = (         void  *)0;
        sqlstm.sqinds[21] = (         int  )0;
        sqlstm.sqharm[21] = (unsigned int  )0;
        sqlstm.sqadto[21] = (unsigned short )0;
        sqlstm.sqtdso[21] = (unsigned short )0;
        sqlstm.sqhstv[22] = (         void  *)&rp->call_duration;
        sqlstm.sqhstl[22] = (unsigned int  )4;
        sqlstm.sqhsts[22] = (         int  )0;
        sqlstm.sqindv[22] = (         void  *)0;
        sqlstm.sqinds[22] = (         int  )0;
        sqlstm.sqharm[22] = (unsigned int  )0;
        sqlstm.sqadto[22] = (unsigned short )0;
        sqlstm.sqtdso[22] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
		
		rate_key rk;
		rk.rate_group_id=rp->rate_group_id;
		rk.call_type_id=rp->call_type_id; 
		rk.locale_id=rp->locale_id; 
		rk.service_type_id=rp->service_type_id; 

		rate_detail rd;
		rd.time_band_group=rp->time_band_group; 
		rd.unit_rate_id=rp->unit_rate_id; 
		rd.default_rate=rp->default_rate; 
		rd.rate_id=rp->rate_id; 
		rd.day_id=rp->day_id;
		rd.priority=rp->priority; 
		rd.route_group_id=rp->route_group_id;
		rd.net_group_id=rp->net_group_id;
		rd.time_band_type=rp->time_band_type;
		rd.time_block_id=rp->time_block_id;
		rd.discount_group_id=rp->discount_group_id;
		rd.unit_duration=rp->unit_duration;
		rd.unit_cost=rp->cost_unit;
		rd.billable_duration=rp->billable_duration;

		rd.start_date=rp->start_date; 
		rd.end_date=rp->end_date; 
		rd.active_period.start.set_time(rp->start_time);
		rd.active_period.end.set_time(rp->end_time);
		rd.call_duration=rp->call_duration;

		insert(rk,rd);

    } 

    /* EXEC SQL AT CUSTOMER_CARE CLOSE c_rate; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )987;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    printf("\n %d  rate rules loaded.\n\n",i);
}


void time_discount_bands::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct time_discount_band 
	{ 
		char	band_id[BUF_LEN];
		int		start_second;
		int		end_second;
		int		t_operator;
		float	t_operand;
		char	time_discount_group_id[BUF_LEN]; 
	} a, *tdb_ptr; 

	int i;
	/* EXEC SQL END DECLARE SECTION; */ 


	tdb_ptr=&a;
 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC ORACLE OPTION (char_map = string); */ 

    /* EXEC SQL AT CUSTOMER_CARE DECLARE c_time_discount_band CURSOR FOR 
        SELECT BAND_ID, START_SECOND, END_SECOND, OPERATOR, OPERAND, DISCOUNT_GROUP_ID
            FROM R_TIME_DISCOUNT_BANDS_V; */ 
 
       
    /* EXEC SQL AT CUSTOMER_CARE OPEN c_time_discount_band; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0016;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1015;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    /* EXEC SQL WHENEVER NOT FOUND DO break; */ 
 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 


    for (i=0; ;i++) 
    { 
        /* EXEC SQL AT CUSTOMER_CARE FETCH c_time_discount_band INTO :tdb_ptr; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 38;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1043;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (         void  *)tdb_ptr->band_id;
        sqlstm.sqhstl[0] = (unsigned int  )100;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&tdb_ptr->start_second;
        sqlstm.sqhstl[1] = (unsigned int  )4;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&tdb_ptr->end_second;
        sqlstm.sqhstl[2] = (unsigned int  )4;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&tdb_ptr->t_operator;
        sqlstm.sqhstl[3] = (unsigned int  )4;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&tdb_ptr->t_operand;
        sqlstm.sqhstl[4] = (unsigned int  )4;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)tdb_ptr->time_discount_group_id;
        sqlstm.sqhstl[5] = (unsigned int  )100;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
		time_discount_band_data d;

		d.start_second=tdb_ptr->start_second;
		d.end_second=tdb_ptr->end_second;
		d.dis_operator=(e_operator)tdb_ptr->t_operator;
		d.dis_operand=tdb_ptr->t_operand;

		insert(tdb_ptr->time_discount_group_id,d);
    } 

    /* EXEC SQL AT CUSTOMER_CARE CLOSE c_time_discount_band; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1095;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    printf("\n %d time discount bands loaded.\n\n",i);
}

void value_added_services::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct value_added_service
	{ 
		int		conn_account_no;					// number(10)
		char	conn_client_client_code[BUF_LEN];	// varchar2(8)
		char	service_service_code[BUF_LEN];		// varchar2(5)
		char	rate_grp_rate_group_id[BUF_LEN];	// varchar2(5)
		char	start_date[BUF_LEN];				// date
		char	end_date[BUF_LEN];					// date
	} a[FETCH_SIZE];

	struct value_added_service_ind
	{
		short	conn_account_no_ind;					
		short	conn_client_client_code_ind;	
		short	service_service_code_ind;	
		short	rate_grp_rate_group_id_ind;	
		short	start_date_ind;				
		short	end_date_ind;					
	} a_ind[FETCH_SIZE];

	int rows_to_fetch, rows_before, rows_this_time; 

	/* EXEC SQL END DECLARE SECTION; */ 


	int i;
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 


    /* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 

	/* EXEC SQL AT CUSTOMER_CARE DECLARE c_value_added_service CURSOR FOR 
        SELECT	CONN_ACCOUNT_NO,
				CONN_CLIENT_CLIENT_CODE, 
				SERVICE_SERVICE_CODE, 
				RATE_GRP_RATE_GROUP_ID,
				START_DATE, 
				END_DATE
    FROM R_VALUE_ADDED_SERVICES_GPRS_V; */ 

	//FROM R_VAS_GPRS_R_V;	// RE_RATE_SEARCH - 5
      
    /* EXEC SQL AT CUSTOMER_CARE OPEN c_value_added_service; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = sq0017;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1123;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
 
	/* EXEC SQL WHENEVER SQLERROR DO db_error("ORACLE error:"); */ 


	while (rows_this_time == rows_to_fetch) 
	{ 
        /* EXEC SQL AT CUSTOMER_CARE FETCH c_value_added_service INTO :a INDICATOR :a_ind; */ 

{
        struct sqlexd sqlstm;

        sqlstm.sqlvsn = 10;
        sqlstm.arrsiz = 38;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )10;
        sqlstm.offset = (unsigned int  )1151;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)0;
        sqlstm.sqhstv[0] = (         void  *)&a->conn_account_no;
        sqlstm.sqhstl[0] = (unsigned int  )4;
        sqlstm.sqhsts[0] = (         int  )sizeof(struct value_added_service);
        sqlstm.sqindv[0] = (         void  *)&a_ind->conn_account_no_ind;
        sqlstm.sqinds[0] = (         int  )sizeof(struct value_added_service_ind);
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqharc[0] = (unsigned int   *)0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)a->conn_client_client_code;
        sqlstm.sqhstl[1] = (unsigned int  )100;
        sqlstm.sqhsts[1] = (         int  )sizeof(struct value_added_service);
        sqlstm.sqindv[1] = (         void  *)&a_ind->conn_client_client_code_ind;
        sqlstm.sqinds[1] = (         int  )sizeof(struct value_added_service_ind);
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqharc[1] = (unsigned int   *)0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)a->service_service_code;
        sqlstm.sqhstl[2] = (unsigned int  )100;
        sqlstm.sqhsts[2] = (         int  )sizeof(struct value_added_service);
        sqlstm.sqindv[2] = (         void  *)&a_ind->service_service_code_ind;
        sqlstm.sqinds[2] = (         int  )sizeof(struct value_added_service_ind);
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqharc[2] = (unsigned int   *)0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)a->rate_grp_rate_group_id;
        sqlstm.sqhstl[3] = (unsigned int  )100;
        sqlstm.sqhsts[3] = (         int  )sizeof(struct value_added_service);
        sqlstm.sqindv[3] = (         void  *)&a_ind->rate_grp_rate_group_id_ind;
        sqlstm.sqinds[3] = (         int  )sizeof(struct value_added_service_ind);
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqharc[3] = (unsigned int   *)0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)a->start_date;
        sqlstm.sqhstl[4] = (unsigned int  )100;
        sqlstm.sqhsts[4] = (         int  )sizeof(struct value_added_service);
        sqlstm.sqindv[4] = (         void  *)&a_ind->start_date_ind;
        sqlstm.sqinds[4] = (         int  )sizeof(struct value_added_service_ind);
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqharc[4] = (unsigned int   *)0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)a->end_date;
        sqlstm.sqhstl[5] = (unsigned int  )100;
        sqlstm.sqhsts[5] = (         int  )sizeof(struct value_added_service);
        sqlstm.sqindv[5] = (         void  *)&a_ind->end_date_ind;
        sqlstm.sqinds[5] = (         int  )sizeof(struct value_added_service_ind);
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqharc[5] = (unsigned int   *)0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		client c;
		
		for (i=0; i<rows_this_time ;i++) 
		{ 
			//handling null fetches
			
			a[i].conn_account_no = (a_ind[i].conn_account_no_ind < 0) ? 0 : a[i].conn_account_no;
			strcpy(a[i].conn_client_client_code,
				  ((a_ind[i].conn_client_client_code_ind < 0) ? "UNDEF":a[i].conn_client_client_code));
			strcpy(a[i].service_service_code,
				  ((a_ind[i].service_service_code_ind < 0) ? "UNDEF":a[i].service_service_code));
			strcpy(a[i].rate_grp_rate_group_id,
				  ((a_ind[i].rate_grp_rate_group_id_ind < 0) ? "UNDEF":a[i].rate_grp_rate_group_id));
			strcpy(a[i].start_date,
				  ((a_ind[i].start_date_ind < 0) ? "19720710":a[i].start_date));
			strcpy(a[i].end_date,
				  ((a_ind[i].end_date_ind < 0) ? "19720710":a[i].end_date));
			
			
			c.account_no	=a[i].conn_account_no;
			c.client_code	=a[i].conn_client_client_code;
			c.rate_group_id	=a[i].rate_grp_rate_group_id;
			c.service_start_date.set_date(a[i].start_date);
			c.service_end_date.set_date(a[i].end_date);

			//gprs_connections->insert(c.account_no, c);

			gsm_connections->gprs_client_map[c.account_no] = c;
			
		}
    } 

    /* EXEC SQL AT CUSTOMER_CARE CLOSE c_value_added_service; */ 

{
    struct sqlexd sqlstm;

    sqlstm.sqlvsn = 10;
    sqlstm.arrsiz = 38;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1203;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
 
    printf("\n %d value_added_services loaded.\n\n",rows_before);
}


void roaming_networks::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct network 
	{ 
		char	mcc[BUF_LEN];
		char	mnc[BUF_LEN];
		char	rate_group_id[BUF_LEN];
	} a, *n_w; 
	int i;
	/* EXEC SQL END DECLARE SECTION; */ 

	
	n_w = &a;
	
	/* EXEC SQL  AT CUSTOMER_CARE DECLARE c_roam_network CURSOR FOR 
		SELECT NVL(MCC,''), NVL(MNC,''), NVL(GPRS_RATE_GROUP_ID,'')
		FROM GSM_NETWORKS; */ 
 
	
	/* EXEC SQL AT CUSTOMER_CARE OPEN  c_roam_network; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 38;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0018;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1231;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	
	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 
 
	
	for (i=0; ;i++) 
	{ 
		/* EXEC SQL FETCH c_roam_network INTO :n_w; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 38;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1259;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (         void  *)n_w->mcc;
  sqlstm.sqhstl[0] = (unsigned int  )100;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)n_w->mnc;
  sqlstm.sqhstl[1] = (unsigned int  )100;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)n_w->rate_group_id;
  sqlstm.sqhstl[2] = (unsigned int  )100;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
		insert(n_w->mcc, n_w->mnc, n_w->rate_group_id);
	} 
	
	/* EXEC SQL  AT CUSTOMER_CARE CLOSE c_roam_network; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 38;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1299;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	
	cout<<setw(8)<<i<<" roaming networks loaded."<<endl;
}


void cdr_rejects::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct cdr_reject_
	{ 
		int 	file_id;
		int 	file_position;
		char	uplink_downlink[BUF_LEN];
	} a[FETCH_SIZE]; 

	struct cdr_reject_ind
	{ 
		short 	file_id;
		short 	file_position;
		short	uplink_downlink;
	} ind[FETCH_SIZE]; 

	char t_start[BUF_LEN], t_end[BUF_LEN];
	int i;
	int rows_to_fetch, rows_before, rows_this_time; 
	/* EXEC SQL END DECLARE SECTION; */ 

	
	strcpy(t_start, start_date.c_str());
	strcpy(t_end, end_date.c_str());
	
	rows_to_fetch = FETCH_SIZE;		// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 
	
	
	/* EXEC SQL  AT RATING DECLARE c_rejects CURSOR FOR 
		SELECT FILE_ID, FILE_POS, UPLINK_DOWNLINK	
		FROM R_RJECTED_GPRS_CDRS_V WHERE CALL_TIME >= :t_start
		AND CALL_TIME <= :t_end; */ 
 
	
	/* EXEC SQL AT RATING OPEN  c_rejects; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 38;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0019;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1327;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlstm.sqhstv[0] = (         void  *)t_start;
 sqlstm.sqhstl[0] = (unsigned int  )100;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)t_end;
 sqlstm.sqhstl[1] = (unsigned int  )100;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
 
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL  AT RATING  FETCH c_rejects INTO :a INDICATOR :ind; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 38;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )10;
  sqlstm.offset = (unsigned int  )1356;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (         void  *)&a->file_id;
  sqlstm.sqhstl[0] = (unsigned int  )4;
  sqlstm.sqhsts[0] = (         int  )sizeof(struct cdr_reject_);
  sqlstm.sqindv[0] = (         void  *)&ind->file_id;
  sqlstm.sqinds[0] = (         int  )sizeof(struct cdr_reject_ind);
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqharc[0] = (unsigned int   *)0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&a->file_position;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )sizeof(struct cdr_reject_);
  sqlstm.sqindv[1] = (         void  *)&ind->file_position;
  sqlstm.sqinds[1] = (         int  )sizeof(struct cdr_reject_ind);
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqharc[1] = (unsigned int   *)0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)a->uplink_downlink;
  sqlstm.sqhstl[2] = (unsigned int  )100;
  sqlstm.sqhsts[2] = (         int  )sizeof(struct cdr_reject_);
  sqlstm.sqindv[2] = (         void  *)&ind->uplink_downlink;
  sqlstm.sqinds[2] = (         int  )sizeof(struct cdr_reject_ind);
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqharc[2] = (unsigned int   *)0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
		
		for (i=0; i<rows_this_time; i++) 
		{ 
			insert(a[i].file_id, a[i].file_position);
			insert(a[i].file_id, a[i].file_position, a[i].uplink_downlink);
		}
	} 
	
	/* EXEC SQL AT RATING CLOSE c_rejects; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 38;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1389;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	
	cout<<setw(8)<<rows_before<<" rejected cdrs loaded."<<endl;
}


void historic_imsi::db_read()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	struct h_imsi
	{ 
		char	imsi[BUF_LEN];
		int 	account_no;
		char	start[BUF_LEN];
		char	end[BUF_LEN];
	} a[FETCH_SIZE]; 

	struct h_imsi_ind
	{ 
		short	imsi;
		short 	account_no;
		short	start;
		short	end;
	} ind[FETCH_SIZE]; 

	int rows_to_fetch, rows_before, rows_this_time;
	int i;
	/* EXEC SQL END DECLARE SECTION; */ 

	
	rows_to_fetch = FETCH_SIZE; 	// number of rows in each "batch"  
	rows_before = 0;				// previous value of sqlerrd[2]   
	rows_this_time = FETCH_SIZE; 
	

	// get all closed out records
	/* EXEC SQL  AT CUSTOMER_CARE DECLARE c_his_imsi CURSOR FOR 
		SELECT IMSI_NO, ACCOUNT_NO, 
		TO_CHAR(START_DATE,'YYYYMMDDHH24MISS'), 
		TO_CHAR(END_DATE,'YYYYMMDDHH24MISS')
		FROM SIM_NO_HISTORY WHERE END_DATE IS NOT NULL; */ 
 
	
	/* EXEC SQL AT CUSTOMER_CARE OPEN  c_his_imsi; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 38;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0020;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1410;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
 
	
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL  AT CUSTOMER_CARE  FETCH c_his_imsi INTO :a INDICATOR :ind; */ 

{
  struct sqlexd sqlstm;

  sqlstm.sqlvsn = 10;
  sqlstm.arrsiz = 38;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )10;
  sqlstm.offset = (unsigned int  )1438;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)0;
  sqlstm.sqhstv[0] = (         void  *)a->imsi;
  sqlstm.sqhstl[0] = (unsigned int  )100;
  sqlstm.sqhsts[0] = (         int  )sizeof(struct h_imsi);
  sqlstm.sqindv[0] = (         void  *)&ind->imsi;
  sqlstm.sqinds[0] = (         int  )sizeof(struct h_imsi_ind);
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqharc[0] = (unsigned int   *)0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&a->account_no;
  sqlstm.sqhstl[1] = (unsigned int  )4;
  sqlstm.sqhsts[1] = (         int  )sizeof(struct h_imsi);
  sqlstm.sqindv[1] = (         void  *)&ind->account_no;
  sqlstm.sqinds[1] = (         int  )sizeof(struct h_imsi_ind);
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqharc[1] = (unsigned int   *)0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)a->start;
  sqlstm.sqhstl[2] = (unsigned int  )100;
  sqlstm.sqhsts[2] = (         int  )sizeof(struct h_imsi);
  sqlstm.sqindv[2] = (         void  *)&ind->start;
  sqlstm.sqinds[2] = (         int  )sizeof(struct h_imsi_ind);
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqharc[2] = (unsigned int   *)0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)a->end;
  sqlstm.sqhstl[3] = (unsigned int  )100;
  sqlstm.sqhsts[3] = (         int  )sizeof(struct h_imsi);
  sqlstm.sqindv[3] = (         void  *)&ind->end;
  sqlstm.sqinds[3] = (         int  )sizeof(struct h_imsi_ind);
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqharc[3] = (unsigned int   *)0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 
		
		for (i=0; i<rows_this_time; i++) 
		{
			insert(a[i].imsi, a[i].account_no, a[i].start, a[i].end);
		}
	} 
	
	/* EXEC SQL  AT CUSTOMER_CARE CLOSE c_his_imsi; */ 

{
 struct sqlexd sqlstm;

 sqlstm.sqlvsn = 10;
 sqlstm.arrsiz = 38;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1482;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) db_error("ORACLE error:");
}

 
	
	cout<<setw(8)<<rows_before<<" historic imsis loaded."<<endl;
}


