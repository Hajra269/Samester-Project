#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<iostream>
class Calculator
{
	public:
	  //constructor and destructor
	Calculator();
	virtual ~Calculator();
	
	//pure virtual functions  for calculator class
	virtual float addition();
	virtual float subtraction();
	virtual float multiplication();
	virtual float div();
	virtual float module();
	virtual int  power();
	virtual float square();
	virtual float cosF();
	virtual float sinF();
	virtual float tanF();
	virtual float cosInverse();
	virtual float sinInverse();
	virtual float tanInverse();
	virtual float logarithm();
	virtual float logarithm10();
	
	protected:
	int num1;
	int num2;
	
	

};
#endif