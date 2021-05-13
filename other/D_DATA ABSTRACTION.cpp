//data abstraction
//
//* data abstraction refers to providing only essential information to the outside world and hiding the background details.

//*data abstraction is a programming technique that relies on seperation of interface and implementation
//
//*let's take an example of a TV , which you can turn on and off, change the channel, adjust the volume etc.
//
//*but, udk the internal details, ie you dont know how it recieves the signals, how it translates them and finally displays them on screen.
//
//*thus we can say that a TV seperates its internal implementation from the exteral interface
//
//*in cpp , classes provide great level of data abstraction.
//
//*they provide sufficient public methods to the outside world to play with the functionality of the object and the manipulate object data
//
//*for example your program can make a call to the sort() functin without knowing what algorthm the function actually uses to sort the given valuws



#include<iostream>
using namespace std;

class implementAbstraction
{
	private:
		int a,b;
		
	public:
	void set(int x, int y)
	{
		a = x;
		b = y;
	}
	
	void display()
	{
		cout<<"a= "<<a<<endl;
		cout<<"b= "<<b<<endl;
		}	
		
};

int main()
{
	implementAbstraction obj;
	obj.set(10,20);
	obj.display();
	return 0;
}

















