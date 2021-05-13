// https://codeforces.com/problemset/problem/1316/A
//AUTHOR: shreyamalogi

#include <bits/stdc++.h>
using namespace std ;
void solve()
{
    int n , sum = 0 , maxx;
    cin >> n >> maxx ; 
    while(n--) {
        int x ;
        cin >> x ;
        sum += x ;
    }
    
    if(maxx <= sum) {
        cout << maxx << endl ;
    }
    else
    {
        cout << sum << endl ;
    }
    
}
int main()
{
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    return 0 ;
}
