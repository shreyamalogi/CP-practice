//https://codeforces.com/contest/1493/problem/A
//Author: @shreyamalogi .

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		cout << n - k + k / 2 << '\n';
		for (int i = k + 1; i <= n; i++) {
			cout << i << " ";
		}
		for (int i = (k + 1) / 2; i < k; i++) {
			cout << i << " ";
		}
		cout << ((n - k + k / 2) == 0 ? "" : "\n");
	}
	return 0;
}

//ftfgf
