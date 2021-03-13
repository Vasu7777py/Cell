
#ifndef _CELL_H_
#define _CELL_H_

#ifndef __cplusplus
#error

#else

#define _CELL_VERSION_ "0.0.1"
#define _CELL_NAME_ "Mitochondria"

#define CELL_DEBUG false

#if (CELL_DEBUG)
#define CELL_RELEASE false
#define CELL_errorLog(error) {std::cout << "error : " << error << std::endl;}
#define CELL_info(){std::cout << _CELL_NAME_ << " : " << _CELL_VERSION_<< " beta" << std::endl << "debug mode" << std::endl;}
#else
#define CELL_RELEASE true
#define CELL_errorLog(error) ;
#define CELL_info(){std::cout << _CELL_NAME_ << " : " << _CELL_VERSION_ << std::endl;}
#endif

#include <iostream>
#include <string>

#endif

#endif
