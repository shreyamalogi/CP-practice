//https://www.codechef.com/MARCH21C/problems/NOTIME
//AUTHOR: shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, h, x;
	cin >> n >> h >> x;
	vector<int> t(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	bool checker = false;
	for (int i = 0; i < n; i++) {
		// check if the current hours + one the previous time zone where Chef can go back
		// can be greater than or equal to 'h' (hours needed to solve the last problem)
		if (x + t[i] >= h) {
			checker = true;
			break;
		}
	}
	cout << (checker ? "YES" : "NO") << '\n';
	return 0;
}

