//https://www.codechef.com/problems/FLOW006
//AUTHOR:shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,rem,sum;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		sum=0;
		cin>>n;
		while(n!=0){
			rem = n%10;
			n=n/10;
			sum=sum+rem;
		}
		cout<<sum<<endl;
	}
	return 0;
}
