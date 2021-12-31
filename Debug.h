

/////////////////////////////////////////////////// 
//  Project		: GSM GPRS Call Rating and Rerating
//  File		: Debug.h 
//  Description	: header file for debug
//  Date		: 02 Jan 2002 
//  Developer	: Chandika Nettasinghe 
///////////////////////////////////////////////////


inline void debug (const char*); //

#ifdef DEBUG

inline void debug (const char * msg) //
{
	cerr << "DEBUG> " << msg << endl; //
}

#else

inline void debug (const char * msg) { ; } //

#endif