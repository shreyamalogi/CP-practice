//author :shreyamalogi

/*
let x be our prev element ka maximum
a[i] be our current elemet


*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	int x=0;
	for(int i=0;i<n;i++) {
	cin>>a[i];
	
	a[i]+=x; //add the avlue of x to our cuurent element
	x=max(x,a[i]);
	cout<<a[i]<<" ";
	}
	cout<<endl;
     return 0;
}


//5
//0 1 1 -2 1
//0 1 2 0 3

