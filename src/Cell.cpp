
#include "../lib/Cell.h"
#include "../lib/Shell.h"

int main(int argc, char *argv[]){
	CELL_info();
	CELL::INT integer;
	std::cout << integer << std::endl;
	std::cout << integer.getType() << std::endl;
	return 0;
}
