

/////////////////////////////////////////////////// 
//
//  Project		: GSM GPRS Call Rating and Rerating
//  File		: cdr_file_locations.cpp 
//  Description : cdr_file_locations class implementation 
//  Date		: 02 Jan 2002 
//  Developer	: Chandika Nettasinghe 
//
///////////////////////////////////////////////////


#include "cdr.h"



file_locations::init(string i)
{
	path=i;
	path_and_name ="";
}


char* file_locations::get_full_file_name(string file_name)
{
	path_and_name = path+file_name;
	return ((char*)path_and_name.c_str());
}






