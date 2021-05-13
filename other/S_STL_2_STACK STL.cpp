//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
stack<int> s; //declare stack

//push function

s.push(1);    //1 is pushed in our stack
s.push(2); 
s.push(3); 
s.push(4); 


int x=s.size();  //to find the size of the stack
cout<<x<<endl;   //print size
     return 0;
}

//output: we will get the size as 4








//empty function which returns boolean variables

#include<bits/stdc++.h>

using namespace std;

int main()
{
stack<int> s; //declare stack

//push function

s.push(1);    //1 is pushed in our stack
s.push(2); 
s.push(3); 
s.push(4); 

if(s.empty()){
	cout<<"true/stack is empty";
}else{
	cout<<"false/stack is not empty";
}

     return 0;
}

//output: false/stack is not empty ....(as there are 4 elements already)







//top function

#include<bits/stdc++.h>

using namespace std;

int main()
{
stack<int> s; //declare stack

//push function

s.push(1);    //1 is pushed in our stack (bottom)
s.push(2); 
s.push(3); 
s.push(4); 

	int x=s.top();
	cout<<x<<endl;

    return 0;
}

//output: 4
//as 4 is our top wala element







//if we want to print all the elements in a stack then run a while loop
#include<bits/stdc++.h>

using namespace std;

int main()
{
stack<int> s; //declare stack

//push function

s.push(1);    //1 is pushed in our stack (bottom)
s.push(2); 
s.push(3); 
s.push(4); 

while(!s.empty()) //if the stack is not empty we will run our while loop
{
	int x = s.top();  //it means top element is present in the x
	cout<<x<<" ";
	s.pop();		//element which should be removed from the top of the stack
}

    return 0;
}

//output:4 3 2 1
//4 is at top, it will print 4 and pop out, then 3 will be top of stack....

