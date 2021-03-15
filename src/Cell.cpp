
#include "../lib/Cell.h"
#include "../lib/Shell.h"

int main(int argc, char *argv[]){
	CELL_info();
	if(argc != 4){
		return 0;
	}
	std::cout << "------------------------------------------------------------------------" << std::endl;
	CELL::INT integer = CELL::INT(std::stoi(argv[1]));
	CELL::INT integer2 = CELL::INT(std::stoi(argv[3]));
	CELL::INT integer3 = (integer + integer2);
	switch(argv[2][0]){
		case '+':integer3 = integer + integer2;break;
		case '-':integer3 = integer - integer2;break;
		case '*':integer3 = integer * integer2;break;
		case '/':integer3 = integer / integer2;break;
		case '%':integer3 = integer % integer2;break;
	}
	std::cout << integer << " " << argv[2] << " " << integer2 << " = " <<  integer3 << std::endl;
	return 0;
}
