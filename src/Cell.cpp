
#include "../lib/Cell.h"
#include "../lib/Shell.h"

int main(int argc, char *argv[]){
	CELL_info();
	if(argc == 1){
		runShell();
	}else if(argc != 4){
		for (int i = 0; i < argc; i++){
			std::cout << argv[i] << std::endl;
		}
		return 0;
	}
	std::cout << "------------------------------------------------------------------------" << std::endl;
	CELL::IF ifStatement = CELL::IF(1);
	ifStatement();
	return 0;
}
