//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int r,b,d;
		cin>>r>>b>>d;
		
		if(r>b){
			swap(r,b);
		}
		
		int x=1; //store 1 to x as it is same as r divided by itself
		int y= (b%r==0? b/r:b/r+1);
		
		cout<<(y-x<=d? "yes": "no")<<endl;
		
	}
     return 0;
}

