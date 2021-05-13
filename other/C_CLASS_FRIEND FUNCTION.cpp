#include<iostream>
using namespace std;

class A;
class B
{
	private:
		int b;
	public:
	void sum (A x, B y);
	B(){ b=20;}
		
};

	
class A
{
	private:
		int a;
		friend void B::sum(A x, B y);
	public:
	   A(){ a = 10;}
};


void B::sum(A x, B y)
{
	int result;
	result = x.a + y.b;
	cout<<result;
}	   


int main()
{
	A xobj;
	B yobj;
	yobj.sum(xobj,yobj);
	
}
		   	   	

