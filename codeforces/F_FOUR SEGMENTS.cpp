//https://codeforces.com/problemset/problem/1468/E
//AUTHOR:  shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		vector<int> a(4);
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		sort(a.begin(), a.end());
		// multipy the a[0] with a[2]
		cout << a[0] * a[2] << '\n';
	}
	return 0;
}


