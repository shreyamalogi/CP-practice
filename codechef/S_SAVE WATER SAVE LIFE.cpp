//https://www.codechef.com/SPYB21C/problems/SAVWATER
//author :shreyamalogi

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int H,x,y,C;
		cin>>H>>x>>y>>C;
		cout<<(H*(x+y/2) <C? "yes" : "no")<<endl;
	
	}
	return 0;
}
