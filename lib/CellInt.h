
#ifndef _CELL_INT_
#define _CELL_INT_

#ifndef __cplusplus
#error
#else

#include "CellDataType.h"

namespace CELL{
	class INT : public DataType{
		private:
		protected:
		public:
			INT(){
				data = new int;
				data = 0;
				type = "int";
			}
			
			~INT(){}

			bool isNAN(){
				if (data == NULL){
					return true;
				}
				return false;
			}

			std::ostream& operator<<(std::ostream& stream){
				stream << (int) data;
				return stream;
			}
	};
};

#endif

#endif

