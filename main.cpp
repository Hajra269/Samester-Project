#include <iostream>
#include<exception>
#include<math.h>
#include<string>
#include "SimpleCalculator.h"
#include "ScientificCalculator.h"
int main()
{
	
	Calculator *cal;   /*base clss pointer access its child class functions easily.overide its functions when calling*/
	ScientificCalculator sc;
	SimpleCalculator si;
	cal=&si;   //for taking cin in parent classes
	cal=&sc;


		system("cls");                      //clear screen funstion         
 	
    int option{0};	
	
std::cout<<"\t\t\t********************  CALCULATOR **********************\n"; 
std::cout<<"---------------------------------------------------------------------------------\n"; 
std::cout<<"Operations"<<"\t\t\tTrigonometric Functions"<<"\t\t       Logarithmic Functions\n"; 
std::cout<<"-----------------------------------------------------------------------------------\n"; 
std::cout<<"1: Addition\t\t\t"<<"8: Sin\t\t\t"<<"\t\t14: Log"<<std::endl; 
std::cout<<"2: Subtraction\t\t\t"<<"9: Cos\t\t\t"<<"\t\t15: Log with base 10"<<std::endl; 
std::cout<<"3: Multiplication\t\t"<<"10: Tan\t\t\t"<<std::endl; 
std::cout<<"4: Division\t\t\t"<<"11: Inverse of Sin\t\t\t"<<std::endl; 
std::cout<<"5: Module\t\t\t"<<"12: Inverse of Cos\t\t\t"<<std::endl;
std::cout<<"6: Exponent\t\t\t"<<"13: Inverse of Tan\t\t\t"<<std::endl;
std::cout<<"7: Square root\t\t\t"<<std::endl<<std::endl;

do
{
	    std::cout<<std::endl<<std::endl;
		std::cout<<"Enter the function that you want to perform : "; 
	    std::cout<<std::endl;
	std::cin>>option;
    std::cout<<std::endl;
switch(option)                       //switch case used for clear output
{
	++option;
	
case 1:
                	 // function definations for Simple Calculator
    std::cin>>si;
    std::cout<<"Addition ="<<cal->addition();            
    std::cout<<std::endl;
     break;
case 2:

    std::cin>>si;
	std::cout<<"Subtraction ="<<cal->subtraction();
	std::cout<<std::endl;                             //subtraction function 
    break;
case 3:

	std::cin>>si;
	std::cout<<"Multiplication ="<<cal->multiplication();  //mutiplication function 
	std::cout<<std::endl;
	break;
	case 4:
		
		std::cin>>si;
		std::cout<<"Division ="<<cal->div();
		std::cout<<std::endl;
		
	break;
    case 5:
	std::cin>>si;
	std::cout<<"Mod ="<<cal->module();
	std::cout<<std::endl;
	break;
	
	case 6:
	std::cin>>si;                     
	std::cout<<"Power ="<<cal->power();
	std::cout<<std::endl;
	break;
	case 7:
	std::cin>>sc;
	std::cout<<"Squre root ="<<cal->square();
	std::cout<<std::endl;
	break;
	case 8:
		
	std::cin>>sc;
	std::cout<<"Sin  ="<<cal->sinF();
	std::cout<<std::endl;
	break;
	case 9:

	std::cin>>sc;
	std::cout<<"cos  ="<<cal->cosF();
	std::cout<<std::endl;
	break;
	case 10:

	std::cin>>sc;
	std::cout<<"tan ="<<cal->tanF();
	std::cout<<std::endl;
	break;
	case 11:

	std::cin>>sc;
	std::cout<<"sinInverse ="<<cal->sinInverse();
	std::cout<<std::endl;
	break;
	case 12:

	std::cin>>sc;
	std::cout<<"cosInverse ="<<cal->cosInverse();
	std::cout<<std::endl;
	break;
	case 13:

	std::cin>>sc;
	std::cout<<"tanInverse ="<<cal->tanInverse();
	std::cout<<std::endl;
	break;
    case 14:

	std::cin>>sc;
	std::cout<<"log ="<<cal->logarithm();
	std::cout<<std::endl;
	break;
	case 15:
	
	std::cin>>sc;
	std::cout<<"log10 ="<<cal->logarithm10();
	std::cout<<std::endl;
	break;

   default:
   std::cout<<"Invalid option ,try again"<<"\n\n";

}
}
    while(option!=0);                                                  //default case for invalid 
	
    return 0;
   
}