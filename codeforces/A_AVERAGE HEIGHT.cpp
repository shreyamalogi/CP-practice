//https://codeforces.com/contest/1509/problem/A
//author: shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> even, odd;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			// store the even and odd numbers separately
			if (x % 2 == 0) {
				even.emplace_back(x);
			} else {
				odd.emplace_back(x);
			}
		}
		// print the elements in the 'even' vector
		for (int i = 0; i < (int) even.size(); i++) {
			cout << even[i] << " ";
		}
		// consequently, print the elements in the 'odd' vector
		for (int i = 0; i < (int) odd.size(); i++) {
			cout << odd[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
