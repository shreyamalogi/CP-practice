//https://www.codechef.com/problems/CARVANS
//AUTHOR: shreyamalogi

#include <bits/stdc++.h>

using namespace std;
	
int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// store the max speed of every car
		vector<int> max_speed(n);
		for (int i = 0; i < n; i++) {
			cin >> max_speed[i];
		}
		// create another vector to calculate the current speed
		vector<int> speed(n);
		// the first car will always have its max speed
		speed[0] = max_speed[0];
		for (int i = 1; i < n; i++) {
			// check if the current speed of the car is less than 
			// the speed of the previous car, if its less than, then
			// it will be unchanged, otherwise, the speed of the previous
			// car will overwrite its speed
			speed[i] = min(max_speed[i], speed[i - 1]);
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			// check if the current speed of every car matches its own max speed
			if (speed[i] == max_speed[i]) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
