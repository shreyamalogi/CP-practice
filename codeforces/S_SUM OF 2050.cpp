//https://codeforces.com/contest/1517/problem/A
//solved by shreyamalogi

#include <bits/stdc++.h>
using namespace std;
int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		auto PrintAns = [&](long long x) {
			long long sum = 0;
			while (x > 0) {
				sum += (x % 10);
				x /= 10;
			}
			return sum;
		};
		// check if 'n' is divisible by 2050
		// if yes, get the sum of the digits of the quotient of 'n' and 2050
		// otherwise, print -1
		cout << (n % 2050 == 0 ? PrintAns(n / 2050) : -1) << '\n';
	}
	return 0;
}
