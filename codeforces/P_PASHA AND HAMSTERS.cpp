//https://codeforces.com/problemset/problem/421/A
//author : shreyamalogi

#include <bits/stdc++.h>

using namespace std;
	
int main() {
	int n, a, b;
	cin >> n >> a >> b;
	// create a vector with size of 'n' and fill it with 0's
	vector<int> sequence(n, 0);
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		// mark the index of the vector with the numbers that Arthur likes with '1'
		sequence[x - 1] = 1;
	}
	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		// check if Arthur's numbers have already marked the i-th index
		if (sequence[x - 1] == 0) {
			// mark the index of the vector with the numbers that Alexander likes with '2'
			sequence[x - 1] = 2;
		}
	}
	// print the sequence that was marked
	for (auto x : sequence) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;
}
