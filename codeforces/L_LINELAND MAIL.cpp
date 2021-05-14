//author :shreyamalogi
//https://codeforces.com/problemset/problem/567/A

/*
			// if it's the first element:
			// minimum difference = |current - next|
			// maximum difference = |current - last|
			
			// if it's the last element:
			// minimum difference = |current - previous|
			// maximum difference = |current - first|

			// if it's NOT the last or first element:
			// minimum difference = min(|current - previous|, |current - next)
			// maximum difference = max(|current - first|, |current - last|)

*/


#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << abs(a[i] - a[i + 1]) << " " << abs(a[i] - a[n - 1]);
		} else if (i == n - 1) {
			cout << abs(a[i] - a[i - 1]) << " " << abs(a[i] - a[0]);
		} else {
			cout << min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])) << " " << max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
		}
		cout << '\n';
	}
	return 0;
}
//
//4
//-5 -2 2 7
//3 12
//3 9
//4 7
//5 12

