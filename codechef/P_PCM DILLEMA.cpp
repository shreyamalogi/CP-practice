//https://www.codechef.com/problems/CCBTS01
//AUTHOR: shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		// just check if string contains 'P', 'C', and 'M'
		cout << (s == "CMP" ? "YES" : "NO") << '\n';
	}
	return 0;
}
