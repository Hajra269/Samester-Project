#include<iostream>
#include<exception>
#include <math.h>
#include"SimpleCalculator.h"

SimpleCalculator::SimpleCalculator(){}
SimpleCalculator::~SimpleCalculator(){}

std::ostream& operator<<(std::ostream& out, SimpleCalculator &si) //defintion of operator overloading forostream
{
	out<<si.num1<<" "<<si.num2<<"\n";
	return out;
}
std::istream& operator>>(std::istream& in, SimpleCalculator &si)  //defintion of operator overloading foristream
{
	std::cout<<"Enter num1 and num2 "<<std::endl;
	in>>si.num1>>si.num2;
	
	return in;
	
}
                                     //defination of all memeber functions:  
float SimpleCalculator::addition()
{
	return num1+num2;        //// add function  define
	
}
float SimpleCalculator::subtraction()
{
	return num1-num2;      //subtract function  define
	
}
float SimpleCalculator::multiplication()
{
	return num1*num2;      //multiply function define  
}
float SimpleCalculator::div()
{
	try{
		if(num2==0)
			throw std::runtime_error{"not allowed"};		//throw exception for divided by zero error
		else
			    return num1/num2;  //div function   define
	}
	catch(std::runtime_error &e2)               //catch bloack for runtime_error constructor
	{
	std::cout<<"divide by zero is "<<e2.what();
		std::cout<<std::endl;
	}        
	       

}
float SimpleCalculator::module()  
{
		try{
		if(num2==0)
			throw std::runtime_error{"not allowed"};		//throw exception for divided by zero error
		else
			    return num1%num2;  //div function   define
	}
	catch(std::runtime_error &e2)               //catch bloack for runtime_error constructor
	{
	std::cout<<"divide by zero is "<<e2.what();
		std::cout<<std::endl;
	}        
	       
}
int SimpleCalculator::power()  
{
    int result{1};
	 result= pow(num1,num2);  //power function  call
	
	return result;
}
