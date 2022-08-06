#ifndef  SIMPLECALCULATOR_H
#define  SIMPLECALCULATOR_H
#include <iostream>
#include <math.h>
#include "Calculator.h"
class SimpleCalculator: public Calculator
{
	public:
	
	SimpleCalculator();
	~SimpleCalculator();
	
	//member functions for simple calculator
     float	addition();
	  float subtraction();
	  float multiplication();
	  float div();
      float module();
	  int power();
	 

	 //insertion and exsertion overloading
	 friend std::ostream& operator<< (std::ostream& out, SimpleCalculator& si);
	 friend std::istream& operator>> (std::istream& in , SimpleCalculator& si);

	
};
#endif