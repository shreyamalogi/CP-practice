//author :shreyamalogi

/*



*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int D,d,A,B,C;
		cin>>D>>d>>A>>B>>C;
		
		int sum=0;
		
		sum=(D*d>=10? A:sum);
		sum=(D*d>=21? B:sum);
		sum=(D*d>=42? C:sum);
		cout<<sum<<endl;
	}
     return 0;
}


//3
//1 1 1 2 3
//0
//10 1 1 2 3
//1
//10 3 1 2 3

