//Type Conversion in C++
//
//A type cast is basically a conversion from one type to another. There are two types of type conversion:
//
//Implicit Type Conversion Also known as ‘automatic type conversion’.
//Done by the compiler on its own, without any external trigger from the user.
//Generally takes place when in an expression more than one data type is present. In such condition type conversion (type promotion) takes place to avoid lose of data.
//All the data types of the variables are upgraded to the data type of the variable with largest data type.
//
//bool -> char -> short int -> int -> 
//
//unsigned int -> long -> unsigned -> 
//
//long long -> float -> double -> long double
//
//It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).


//Example of Type Implicit Conversion:
#include<iostream>
using namespace std;

int main()
{
	int x=10;
	char y = 'a';
	x=x+y;
	float z = x+1.0;
	
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	return 0;
}

//Output:
//x = 107
//y = a
//z = 108














