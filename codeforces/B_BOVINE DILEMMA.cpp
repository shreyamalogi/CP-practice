//https://codeforces.com/problemset/problem/1466/A
//author: shreyamalogi

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
		vector<float> a(n);
		
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		
		set<float>s;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				float area = 0.5* (a[j]-a[i]);
				if( area > 0)
				{
					s.insert(area);
				}
			}cout<<s.size()<<endl;

    	}
		
    }
	return 0;
}
