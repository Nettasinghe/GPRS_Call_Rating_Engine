

/////////////////////////////////////////////////// 
//
//  Project		: GSM GPRS Call Rating and Rerating
//  File		: db.h 
//  Description	: header file for database mediation
//  Date		: 02 Jan 2002 
//  Developer	: Chandika Nettasinghe
//
///////////////////////////////////////////////////


#ifndef DB_H
#define DB_H

void	db_error(char*);
void	sql_error(char *msg);
void	db_login_customer_care(char*);
void	db_login_rating(char*);
void	db_logout_customer_care();
void	db_logout_rating();

void	db_insert_rated_cdr(int cdr_count);

#define INSERT_SIZE 100


#endif

