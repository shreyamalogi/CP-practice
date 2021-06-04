//METHOD OF ACCESING A CLASS MEMBERS USING SCOPE RESOLUTION. 
#include<iostream>
using namespace std;
class test
	{
		private :
			int a,b,c;
		public:
		    int addition(int a, int b)
		{
			c=a+b;
			return 0;	
		}
		void display();
	};
	
	
	    void test::display() //using scope resolution operator
	    {
	    	cout<<"the sum is: "<< c << "\n";
		}
		
		int main()
		{
			test obj;
			obj.addition(10,20);
			obj.display();
			return 0;
		}
	
