
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
				type = "int";
			}
			
			~INT(){}

			bool isNAN(){
				if (data == NULL){
					return true;
				}
				return false;
			}
	};
};

#endif

#endif

