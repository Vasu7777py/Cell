
#ifndef _CELL_BOOL_
#define _CELL_BOOL_

#include "CellDataType.h"

namespace CELL{
	class BOOL : public DataType{
		private:
		protected:
			bool value;
		public:
			BOOL(){
				value = true;
				data = &value;
				type = "bool";
			}

			BOOL(int value){
				if(value <= 0){
					this->value = false;
				}else{
					this->value = true;
				}
				data = &value;
				type = "bool";
			}

			BOOL(bool value){
				this->value = value;
				data = &value;
				type = "bool";
			}

			~BOOL() override {}

			std::string getType() override {
				return type;
			}

			BOOL operator+(BOOL& other){
				BOOL ret;
				if(value && other.value){
					ret.value = true;
				}else{
					ret.value = false;
				}
				return ret;
			}

			BOOL operator&&(BOOL& other){
				BOOL ret;
				if(value && other.value){
					ret.value = true;
				}else{
					ret.value = false;
				}
				return ret;
			}

			BOOL operator||(BOOL& other){
				BOOL ret;
				if(value || other.value){
					ret.value = true;
				}else{
					ret.value = false;
				}
				return ret;
			}

			friend std::ostream& operator<<(std::ostream& stream, BOOL& self);
	};

	std::ostream& operator<<(std::ostream& stream, BOOL& self){
		stream << *((bool*) self.data);
		return stream;
	}
};

#endif
