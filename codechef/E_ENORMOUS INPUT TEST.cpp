#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,t, cnt=0;
	cin>>n>>k>>t;
	for(int i=0;i<n;++i){
		cin>>t;
		if(k%t==0)
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
