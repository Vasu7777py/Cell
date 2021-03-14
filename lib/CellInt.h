
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
			int value;
		public:
			INT(){
				value = 0;
				data = &value;
				type = "int";
			}
			
			~INT(){}

			friend std::ostream& operator<<(std::ostream& stream, const INT& self);
	};

	std::ostream& operator<<(std::ostream& stream, const INT& self){
		stream << *((int*) self.data);
		return stream;
	}
};

#endif

#endif

