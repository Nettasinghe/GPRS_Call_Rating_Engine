

///////////////////////////////////////////////////
//
//  Project		: GSM GPRS Call Rating and Rerating
//  File		: value_added_servics.cpp 
//  Description : value_added_servics class implementation 
//  Date		: 02 Jan 2002 
//  Developer	: Chandika Nettasinghe 
//
///////////////////////////////////////////////////


#include "db_data_containers.h"

bool value_added_services::insert(value_added_services_key &k, value_added_services_data &d)
{
	bool no_errors=true;
	v_services.insert( make_pair(k, d) );

	return no_errors;
}

bool value_added_services_key::operator < (const value_added_services_key &s) const 
{
	if(account_no < s.account_no)
		return true;
	else if	((account_no == s.account_no) && (service_code < s.service_code))
		return true;
	return false;
}