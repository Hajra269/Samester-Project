#ifndef  SCIENTIFICCALCULATOR_H
#define  SCIENTIFICCALCULATOR_H
#include <iostream>
#include <math.h>
#include "Calculator.h"
class ScientificCalculator: public Calculator
{
	public:
	
	ScientificCalculator();
	~ScientificCalculator();
	
	//member functions for simple calculator
	 float square();
	 float cosF();
	 float sinF();
	 float tanF();
	 float cosInverse();
	 float sinInverse();
	 float tanInverse();
	 float logarithm10();
	 float logarithm();
	 //insertion and exsertion overloading
	 friend std::ostream& operator<< (std::ostream& out, ScientificCalculator& sc);
	 friend std::istream& operator>> (std::istream& in , ScientificCalculator& sc);
	
};
#endif