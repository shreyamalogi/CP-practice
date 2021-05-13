//https://www.codechef.com/problems/PAWRI
//author : @shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		string tmp = "";
		for (int i = 0; i < (int) s.size(); i++) {
			if (s.substr(i, 5) == "party") {
				tmp += "pawri";
				i += 4;
				continue;
			}
			tmp += s[i];
		}
		cout << tmp << '\n';
	}
	return 0;
}


