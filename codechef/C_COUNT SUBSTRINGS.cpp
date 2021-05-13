//https://www.codechef.com/problems/CSUB
//author : shreyamalogi

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		string s;
		cin>>n>>s;
		long long ones = count(s.begin(), s.end(), '1');
		cout<<(ones * (ones+1)/2)<<endl;
	}
}
