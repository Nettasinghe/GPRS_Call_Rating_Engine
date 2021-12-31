

/////////////////////////////////////////////////// 
//
//  Project		: GSM GPRS Call Rating and Rerating
//  File		: Ticket.h 
//  Description	: token class definition
//  Date		: 02 Jan 2002 
//  Developer	: Chandika Nettasinghe
//
///////////////////////////////////////////////////


#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

typedef enum {T_UNDEF, T_ON, T_OFF} e_token_state;

class token
{
public:
	e_token_state token_state;
	string file_name;
	string token_text;

	FILE *token_file;

	bool set_token(e_token_state a);
	token(string f_name);
	bool is_runable(void);
	e_token_state code_token(string a);
	string decode_token(e_token_state a);
};
