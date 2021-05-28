//author :shreyamalogi

/*  And Then There Were K

			// we need to find the highest power of 2 that is smaller or
			// equal to 'n' itself by dividing 'n' with the powers of 2
			// and when 'n' becomes 1, then we need to store the 'i'-th index
			// (this will be the exponent of the maximum power of 2 before 'n'
			// or 'n' itself)
			
			// the answer would the maximum power of 2 before 'n' or 'n' itself
			// minus one (because this would result to 0 in binary AND operation)

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		cin>>n;
		
		
		int last =0;
		for(int i=0;i<n;i++){
			cout<<(n>>i)<<" ";
			
		if((n>>i)&1)==1){
			last=i;
		}
	 }
	 
	 cout<<(1<<last)-1<<endl;
	}
     return 0;
}

