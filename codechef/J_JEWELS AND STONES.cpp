//https://www.codechef.com/problems/STONES
//author: shreyamalogi

#include <bits/stdc++.h>
using namespace std;
	
int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		string j, s;
		cin >> j >> s;
		// create 'cnt' variable to count the matched characters
		int cnt = 0;
		// note: you don't need to delete characters
		// the outer loop must execute on string 's' instead of string 'j'
		// it is stated in the problem, "how much of S is in J"
		for (auto x : s) {
			// create a checker variable
			bool checker = false;
			// check if a character in 's' is in string 'j'
			for (auto y : j) {
				if (x == y) {
					// it if matches, then change the value of the checker to true
					checker = true;
					// don't forget to end the loop
					break;
				}
			}
			if (checker) {
				// if the checker is true, then increment the 'cnt' variable
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
