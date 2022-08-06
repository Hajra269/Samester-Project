#include<iostream>
#include<exception>
#include<math.h>
#include"ScientificCalculator.h"
#define PI 3.141

ScientificCalculator::ScientificCalculator(){}
ScientificCalculator::~ScientificCalculator(){}

std::ostream& operator<<(std::ostream& out, ScientificCalculator &sc) //defintion of operator overloading forostream
{
	out<<sc.num1<<"\n";
	return out;
}
std::istream& operator>>(std::istream& in, ScientificCalculator &sc)  //defintion of operator overloading foristream
{
	std::cout<<"Enter num1 "<<std::endl;
	in>>sc.num1;
	
	return in;
}                                     //defination of all memeber functions:  
float ScientificCalculator::square()
{
	return sqrt(num1);  //square root function  call
	 
}
float ScientificCalculator::cosF()
{
	return cos(num1);      //cos function  call

}
float ScientificCalculator::sinF()
{
	return sin(num1);   //sin function call

}
float ScientificCalculator::tanF()
{
	return tan(num1);           //tan function  call

}
float ScientificCalculator::cosInverse()
{
	return num1*cos(num1)*180.0/PI;        //formula for inverse value

}
float ScientificCalculator::sinInverse()
{
	return num1*sin(num1)*180.0/PI;        //formula for inverse value
	
}
float ScientificCalculator::tanInverse()
{
	return num1*tan(num1)*180.0/PI;     //formula for inverse value
	
}
float ScientificCalculator::logarithm()
{
	float v{0};
	v=log(num1);    //calculating value of ln
	return v;
	
}
float ScientificCalculator::logarithm10()
{
	float a{0};
	a=log10(num1);  //calculating log with base 10.
	return a;	
}