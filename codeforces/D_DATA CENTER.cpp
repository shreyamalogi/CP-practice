//https://codeforces.com/problemset/problem/1250/F
//author: shreyamalogi

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int ans= INT_MAX;
	
	for (int i=1; i<=sqrt(n); i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i*j==n){
				// store the smallest perimeter that can be calculated
				ans = min(ans, 2*i + 2*j);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
