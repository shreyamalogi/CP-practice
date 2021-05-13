//https://www.codechef.com/problems/WEIGHTBL
//AUTHOR: shreyamalogi

#include <bits/stdc++.h>

using namespace std;
	
int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int w1, w2, x1, x2, m;
		cin >> w1 >> w2 >> x1 >> x2 >> m;
		// check if the weight increase is within the range of
		// both the weight interval (inclusive) multiplied to 'm'
		cout << ((w2 - w1) >= x1 * m && (w2 - w1) <= x2 * m ? 1 : 0) << '\n';
	}
	return 0;
}
