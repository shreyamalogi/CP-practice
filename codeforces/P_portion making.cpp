//author :shreyamalogi

/*

Potion-making
https://codeforces.com/problemset/problem/1525/A

magic essence: 5%= 5/100 = 1/20 = 1ltr
water essence: 95%= 95/100 = 19/29 = 19ltrs
1+19 = 20 steps
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
	int k;
	cin>>k;
	
	int a=k; 				//percentag of magic
	int b=100-k; 			//percentage of water
	int c=__gcd(a,b); 		//// calculate the GCD (Greatest Common Divisor) of 'a' and 'b'
	
	// divide both 'a' and 'b' by their GCD to get their simplest form
	a/=c;
	b/=c;
	
	cout<<a+b<<endl;
}
     return 0;
}


//3
//3
//100
//100
//1
//25
//4

