//https://codeforces.com/problemset/problem/71/A#:~:text=Let's%20consider%20a%20word%20too,strictly%20more%20than%2010%20characters.&text=At%20that%20all%20too%20long,1%20%E2%89%A4%20n%20%E2%89%A4%20100)..
//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  string s;
  cin>>n;
  for(int i=0; i<n; i++){
  	cin>>s;
  	if(s.length()>10){
  		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
	  }else{
	  	cout<<s<<endl;
	  }
  }
  return 0;
  }

