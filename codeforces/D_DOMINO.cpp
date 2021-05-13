//https://codeforces.com/problemset/problem/1499/A
//author: shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k1, k2, w, b;
		cin >> n >> k1 >> k2 >> w >> b;
		// check if the sum of the white cells divided by 2 is greater than or equal to 'w'
		// and if the sumf of the black cells divided by 2 is greater than or equal to 'b'
		if ((k1 + k2) / 2 >= w && ((n - k1) + (n - k2)) / 2 >= b) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
