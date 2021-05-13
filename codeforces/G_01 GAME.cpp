//author :shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int zeroes = 0;
		int ones = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == '0') {
				// count the number of 0s
				zeroes++;
			} else {
				// count the number of 1s
				ones++;
			}
		}
		// find the minimum between 'zeroes' and 'ones', and
		// if it's odd, the Alice wins, otherwise she loses
		cout << (min(zeroes, ones) % 2 == 1 ? "DA" : "NET") << '\n';
	}
	return 0;
}

