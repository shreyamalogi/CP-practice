//https://atcoder.jp/contests/abc190/tasks/abc190_b
//author : @shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s, d;
    cin >> n >> s >> d;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++) {
        if (x[i] < s && y[i] > d) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
