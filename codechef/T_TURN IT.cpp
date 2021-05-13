//https://www.codechef.com/problems/NFS
//author: shreyamalogi

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int u, v, a, s;
		cin>>u>>v>>a>>s;
		
		int car_velocity = u*u-2*a*s;
		cout<<(car_velocity<=v*v? "yes":"no")<<endl;
		
	}
	return 0;
}
