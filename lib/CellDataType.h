
#ifndef _CELL_DATA_TYPE_
#define _CELL_DATA_TYPE_

#ifndef __cplusplus
#error
#else
#endif

#include <iostream>
#include <string>

namespace CELL{
	class DataType{
		private:
		protected:
			void* data;
			std::string type;
		public:
			DataType(){
				data = NULL;
				type = "";
			}

			~DataType(){
				delete data;
			}

			std::string getType(){
				return type;
			}

			std::ostream& operator<<(std::ostream& stream){return stream;}
	};
};

#endif

