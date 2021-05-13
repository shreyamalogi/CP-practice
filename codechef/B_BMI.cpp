//https://www.codechef.com/problems/BMI
//AUTHOR: shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int m, h;
		cin >> m >> h;
		int bmi = m / (h * h);
		if (bmi <= 18) {
			cout << 1;
		} else if (bmi >= 19 && bmi <= 24) {
			cout << 2;
		} else if (bmi >= 25 && bmi <= 29) {
			cout << 3;
		} else {
			cout << 4;
		}
		cout << '\n';
	}
	return 0;
}
