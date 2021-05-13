//https://www.codechef.com/problems/HS08TEST
//author: shreyamalogi

#include<bits/stdc++.h>

using namespace std;

bool prime=1;

bool check(int n){
	if(n%5==0)
	prime=0;
	return prime;
}

int main()
{
	double x,y, v=0.50;
	cin>>x>>y;
	x+=v;
	if(x>y||check(x)){
		cout<<fixed<<setprecision(2)<<y;
	}else{
		y-=x;
		cout<<fixed<<setprecision(2)<<y;
	}
	cout<<endl;
	return 0;
}
