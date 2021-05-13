//Explicit Type Conversion: This process is also called type casting and it is user-defined. Here the user can typecast the result to make it of a particular data type.
//In C++, it can be done by two ways:
//
//Converting by assignment: This is done by explicitly defining the required type in front of the expression in parenthesis. This can be also considered as forceful casting.
//Syntax:(type) expression
//where type indicates the data type to which the final result is converted.


// C++ program to demonstrate 
// explicit type casting 
  
#include <iostream> 
using namespace std; 
  
int main()
{
	double x = 1.2; //explicit from double to int
	int sum = (int)x + 1;
	cout<<"sum = "<<sum;
	return 0;
}














