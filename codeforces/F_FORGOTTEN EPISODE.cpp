//https://codeforces.com/problemset/problem/440/A
//author : shreyamalogi

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int temp= n-1;
	vector<int> a(temp);
	
	for(int i=0; i<temp; i++)
	{
		cin>>a[i];
	}
	
	int episode = 0;
	int index = 0;
	sort(a.begin(), a.end());
	
	for(int i=0; i<=n; i++)
	{
		if(a[index]==i){
			index++;
			continue;
		}
		episode = i;
	}
	cout<<episode<< "\n";
	return 0;
}
