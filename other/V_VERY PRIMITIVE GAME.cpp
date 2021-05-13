//https://atcoder.jp/contests/abc190/tasks/abc190_a
//author : @shreyamalogi

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0) {
        cout << (a > b ? "Takahashi" : "Aoki");
    } else {
        cout << (a < b ? "Aoki" : "Takahashi");        
    }
    cout << '\n';
    return 0;
}


