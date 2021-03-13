
#ifndef _CELL_DATA_TYPE_
#define _CELL_DATA_TYPE_

#ifndef __cplusplus
#error
#else
#endif

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

			std::string type(){
				return type;
			}
	};
};

#endif

