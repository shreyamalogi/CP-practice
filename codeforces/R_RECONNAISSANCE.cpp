//https://codeforces.com/problemset/problem/32/A
//author: @shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d;
	cin >> n >> d;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			if (abs(a[i] - a[j]) <= d) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
