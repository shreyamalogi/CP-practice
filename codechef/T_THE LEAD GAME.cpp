//https://www.codechef.com/problems/TLG
//AUTHOR: shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int x, y, s1=0, s2=0, p1=0, p2=0;
	while(t--){
		cin >> x >> y;
		s1+=x;
		s2+=y;
		int d=0;
		if(s1>s2){
			d=s1-s2;
			p1=max(p1, d);
		} else{
			d=s2-s1;
			p2=max(p2, d);
		}
	}
	if(p1>p2)
		cout << 1 << " " << p1;
	else
		cout << 2 << " " << p2;
	cout << "\n";
	return 0;
}
