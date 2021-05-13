//https://www.codechef.com/problems/PPSUM
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

void decode(){
	int d,n;
	cin>>d>>n;
	int tt=0, ans=0;
	
	for(int i=1; i<=d; ++i){
		for(int j=1; j<=n; ++j){
			tt=tt+j;
			ans = tt;
		}
		n=tt;
		tt=0;
	}
	cout<<ans<<endl;
}

int main()
{
  int tt;
  cin>>tt;
  while(tt--){
  	decode();
  }
  return 0;
  }

