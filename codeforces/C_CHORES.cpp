//https://codeforces.com/problemset/problem/873/A
//AUTHOR : shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		if (k > 0) {
			a[i] = x;
			k--;
		}
	}
	int total_time = 0;
	for (int i = 0; i < n; i++) {
		total_time += a[i];
	}
	cout << total_time << '\n';
	return 0;
}

