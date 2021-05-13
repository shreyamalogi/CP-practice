#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, int factorial=1;
		cin>>n;
		for(int i=1; i<=n; i++){
			factorial*=i;
		}
		cout<<factorial<<endl;
	}
	return 0;
}
