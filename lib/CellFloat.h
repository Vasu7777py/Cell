
#ifndef _CELL_FLOAT_
#define _CELL_FLOAT_

#include "CellState.h"
#include "CellDataType.h"

namespace CELL{
	class FLOAT : public DataType{
		private:
		protected:
			float value;
		public:
			FLOAT(){
				value = 0.0f;
				data = &value;
				type = "float";
			}

			FLOAT(float value){
				this->value = value;
				data = &value;
				type = "float";
			}

			~FLOAT() override {}

			std::string getType() override {
				return type;
			}

			bool isZero(){
				if(value == 0){
					return true;
				}
				return false;
			}

			FLOAT error(){
				FLOAT Error;
				Error.data = NULL;
				return Error;
			}

			FLOAT operator+(FLOAT& other){
				if(isNAN() || (other.isNAN())){
					return this->error();
				}
				FLOAT add;
				add.value = this->value + other.value;
				return add;
			}

			FLOAT operator-(FLOAT& other){
				if(isNAN() || (other.isNAN())){
					return this->error();
				}
				FLOAT sub;
				sub.value = this->value - other.value;
				return sub;
			}

			FLOAT operator*(FLOAT& other){
				if(isNAN() || (other.isNAN())){
					return this->error();
				}
				FLOAT mul;
				mul.value = this->value * other.value;
				return mul;
			}

			FLOAT operator/(FLOAT& other){
				if(isNAN() || other.isNAN() || other.isZero()){
					return this->error();
				}
				FLOAT div;
				div.value = this->value / other.value;
				return div;
			}

			FLOAT operator%(FLOAT& other){
				if(isNAN() || other.isNAN()  || other.isZero()){
					return this->error();
				}
				FLOAT mod;
				mod.value = this->value + other.value;
				return mod;
			}

			void operator=(FLOAT assign){
				this->value = assign.value;
				if(assign.data == NULL){
					this->data = NULL;
				}else{
					this->data = &(this->value);
				}
			}

			void operator=(float value){
				this->value = value;
				this->data = &(this->value);
			}

			friend std::ostream& operator<<(std::ostream& stream, const FLOAT& self);
	};

	std::ostream& operator<<(std::ostream& stream, const FLOAT& self){
		if(self.data == NULL){
			stream << "NAN";
		}else{
			stream << *((float *) self.data);
		}
		return stream;
	}
};

#endif
