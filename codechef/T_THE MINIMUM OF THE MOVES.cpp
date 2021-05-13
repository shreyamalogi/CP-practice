#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		cin>>n;
	   	vector<int> w(n);
	    int minimum_salary = INT_MAX;
		for(int i=0; i<n; i++)
		{
			cin>>w[i];
			minimum_salary = min(minimum_salary, w[i]);
		}
		
		int turns = 0;
		for(int i=0; i<n; i++)
		{
			turns +=(w[i]-minimum_salary);
		}
		cout<< turns << endl;
				
	}
	return 0;
}
