//https://www.codechef.com/problems/NUKES
//author: shreyamalogi

#include <bits/stdc++.h>

using namespace std;
	
int main() {
	long long a, n, k;
	cin >> a >> n >> k;
	vector<long long> v(k, 0);
	for (int i = 0; i < k; i++) {
		v[i] = a % (n + 1);
		a /= (n + 1);
	}
	for (auto x : v) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;
}
