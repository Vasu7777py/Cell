
#ifndef _CELL_DATA_TYPE_
#define _CELL_DATA_TYPE_

#ifndef __cplusplus
#error
#else
#endif

#include <iostream>
#include <string>

namespace CELL{

	#define None "None"

	class DataType{
		private:
		protected:
			void* data;
			std::string type;
		public:
			DataType(){
				data = NULL;
				type = "\0";
			}

			~DataType(){
				if(data != NULL)
					delete data;
			}

			bool isNAN(){
				if (data == NULL){
					return true;
				}
				return false;
			}

			std::string getType(){
				return type;
			}

			friend std::ostream& operator<<(std::ostream& stream, const DataType& self);
	};

	std::ostream& operator<<(std::ostream& stream, const DataType& self){
		if(self.type == "\0"){
			stream << None;
			return stream;
		}
		// compile error handeling
	}

};

#endif

