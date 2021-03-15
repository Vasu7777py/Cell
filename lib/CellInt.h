
#ifndef _CELL_INT_
#define _CELL_INT_

#ifndef __cplusplus
#error
#else

#include "CellDataType.h"

namespace CELL{
	class INT : public DataType{
		private:
			INT error(){
				INT error;
				error.data = NULL;
				error.type = "\0";
				return error;
			}
		protected:
			int value;
		public:
			INT(){
				value = 0;
				data = &value;
				type = "int";
				// std::cout << "creating int" << std::endl;
			}

			INT(int value){
				this->value = value;
				data = &(this->value);
				type = "int";
				// std::cout << "creating int" << std::endl;
			}
			
			~INT() override {
				// std::cout << "destroying int" << std::endl;
			}

			std::string getType() override {
				return type;
			}

			bool isZero(){
				if(value == 0){
					return true;
				}
				return false;
			}

			INT operator+(INT& other) {
				if(isNAN() || (other.isNAN())){
					return this->error();
				}
				INT add;
				add.value = this->value + other.value;
				return add;
			}

			INT operator-(INT& other){
				if(isNAN() || (other.isNAN())){
					return this->error();
				}
				INT sub;
				sub.value = this->value - other.value;
				return sub;
			}

			INT operator*(INT& other){
				if(isNAN() || (other.isNAN())){
					return this->error();
				}
				INT mul;
				mul.value = this->value * other.value;
				return mul;
			}

			INT operator/(INT& other){
				if(isNAN() || (other.isNAN()) || (other.isZero())){
					return this->error();
				}
				INT div;
				div.value = this->value / other.value;
				return div;
			}

			INT operator%(INT& other){
				if(isNAN() || (other.isNAN()) || (other.isZero())){
					return this->error();
				}
				INT mod;
				mod.value = this->value % other.value;
				return mod;
			}

			friend std::ostream& operator<<(std::ostream& stream, const INT& self);
	};

	std::ostream& operator<<(std::ostream& stream, const INT& self){
		if(self.data == NULL){
			stream << "NAN";
		}else{
			stream << *((int*) self.data);
		}
		return stream;
	}
};

#endif

#endif

