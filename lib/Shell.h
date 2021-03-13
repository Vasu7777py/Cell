
/*
*	this file is for writing and running the program in terminal mode
*/


#ifndef _CELL_SHELL_
#define _CELL_SHELL_

#include "Cell.h"

void runShell(){
	bool state = true;
	std::string command;
	while(state){
		std::cout << " > ";
		std::cin >> command;
		if(command == "quit()"){
			state = false;
		}
	}
}

#endif
