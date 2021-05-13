//https://codeforces.com/problemset/problem/859/A
//author: @shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	cin >> k;
	int highest = INT_MIN;
	for (int i = 0; i < k; i++) {
		int r;
		cin >> r;
		highest = max(highest, r);
	}
	cout << (highest <= 25 ? 0 : highest - 25) << '\n';
	return 0;
}
