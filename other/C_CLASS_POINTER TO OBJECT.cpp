//POINTER TO OBJECT

#include<iostream>
using namespace std;

class Test
{
	int a;
	public:
		Test(int b)
		{
			a=b;
		}
	int getVal()
	    {
	    	return a;
		}	
};


int main()
{
	Test obj(100),*ptr_obj;
	ptr_obj = &obj;
	
	cout<<"value obtained using pointer to object is";
	cout<<ptr_obj->getVal()<<endl;
	return 0;
}

