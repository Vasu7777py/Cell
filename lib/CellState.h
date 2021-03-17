
#ifndef _CELL_State_
#define _CELL_State_

#ifndef __cplusplus
#error
#else

#include <iostream>
#include <string>

#define _CELL_VERSION_ "0.0.1"
#define _CELL_NAME_ "Mitochondria" 

#ifdef __linux__
#define SLOGON "hii linux buddy!!"
#endif

#ifdef __WIN32
#define SLOGON "bro switch to linux... :("
#endif

#define CELL_DEBUG true

// if the debug is true the program will be compiled with log functions
#if (CELL_DEBUG)

// release mode will be set to false so that we can track the program
#define CELL_RELEASE false

#define CELL_errorLog(error) {std::cout << "error : " << error << std::endl;}

#define CELL_info(){std::cout << _CELL_NAME_ << " : " << _CELL_VERSION_<< " beta" << std::endl << "debug mode" << std::endl << SLOGON << std::endl;}

#else

#define CELL_RELEASE true

#define CELL_errorLog(error) ;

#define CELL_info(){std::cout << _CELL_NAME_ << " : " << _CELL_VERSION_ << std::endl << SLOGON  << std::endl;}

// debug block ended
#endif

// check for c++ block ended
#endif

#endif
