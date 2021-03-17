
#ifndef _CELL_DATA_TYPE_
#define _CELL_DATA_TYPE_

#ifndef __cplusplus
#error
#else
#endif

#include <iostream>
#include <string>

#include "CellState.h"

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
				// std::cout << "creating base datype object" << std::endl;
			}

			virtual ~DataType(){
				// std::cout << "destroying base datype object" << std::endl;
			}

			virtual bool isNAN(){
				if (data == NULL){
					return true;
				}
				return false;
			}

			virtual std::string getType(){
				return type;
			}

			virtual std::string toString(){
				return None;
			}

			friend std::ostream& operator<<(std::ostream& stream, DataType& self);
	};

	std::ostream& operator<<(std::ostream& stream, DataType& self){
		if(self.getType() == "\0"){
			stream << None;
			return stream;
		}
		stream << self.toString();
		return stream;
	}

};

#endif

