
#ifndef _CELL_FUNC_
#define _CELL_FUNC_

#ifndef __cplusplus
#error
#else

#include <iostream>
#include <vector>
#include <string>

#include "CellDataType.h"
#include "CellDataTypes.h"

namespace CELL{
	class func{
		private:
		protected:
			std::vector<DataType> outputPram;
			std::vector<DataType> inputPram;
			std::string funcType;
			void* function;
		public:

			func(){
				funcType = "\0";
				function = NULL;
			}

			func(int inputPramLenght, int outputPramLenght, const std::string& funcType){
				outputPram.reserve(outputPramLenght);
				inputPram.reserve(inputPramLenght);
				this->funcType = funcType;
				function = NULL;
			}

			func(int inputPramLenght, int outputPramLenght, const std::string& funcType, void* function){
				outputPram.reserve(outputPramLenght);
				inputPram.reserve(inputPramLenght);
				this->funcType = funcType;
				this->function = function;
			}

			void setOutputPramLenght(int outputPramLenght){
				outputPram.reserve(outputPramLenght);
			}

			void setInputPramLenght(int inputPramLenght){
				inputPram.reserve(inputPramLenght);
			}

			void setFuncType(const std::string& funcType){
				this->funcType = funcType;
			}

			int getOutputPramLenght(){
				return outputPram.capacity();
			}

			int getInputPramLenght(){
				return inputPram.capacity();
			}

			std::string getFuncType(){
				return funcType;
			}

			int setFunction(void* function){
				if(this->function != NULL){
					this->function = function;
					return 0;
				}
				return 1;
			}

			int setInputParm(DataType inputParm){
				if(this->inputPram.size() < getInputPramLenght()){
					this->inputPram.emplace_back(inputPram);
					return 0;
				}
				return 0;
			}

			virtual void operator()(){
				CELL_errorLog("create an operator overload for () in the class");
			};
	};

	class IF : public func{
		private:
		protected:
		public:
			IF(int inputPramLenght){
				setInputPramLenght(inputPramLenght);
				setOutputPramLenght(1);
				setFuncType("conditional");
			};

			IF(int inputPramLenght, void* function){
				setInputPramLenght(inputPramLenght);
				setOutputPramLenght(1);
				setFuncType("conditional");
				setFunction(function);
			};
	};
};

#endif

#endif
