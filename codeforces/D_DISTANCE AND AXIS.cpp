//author :shreyamalogi
//https://codeforces.com/problemset/problem/1401/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
	 int tt;
	 cin>>tt;
	 while(tt--)
	 {
	 	int n,k;
	 	cin>>n>>k;
	 	if(n<k){
	 		cout<<k-n;
		 }else{
		 	cout<<(n%2==k%2 ? 0:1);
		 }
		 cout<<endl;
	 }
     return 0;
}

