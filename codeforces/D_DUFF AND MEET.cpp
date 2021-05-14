//author :shreyamalogi
//https://codeforces.com/problemset/problem/588/A


/*
store the minimum value btw cost and p
to make sure that we get the lowest price of that day
and once we get it na, we will use the price of that day
to buy all the meat 


*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int money=0;
	int cost=INT_MAX;
	
	for(int i=0;i<n;i++) {
		int a,p;
		cin>>a>>p;
		cost=min(cost,p);
	
		money+= (cost*a);
	}
	cout<<money<<endl;
	return 0;
}
//
//3
//1 3
//2 2
//3 1
//10

