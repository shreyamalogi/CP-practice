//https://codeforces.com/problemset/problem/177/A1
//AUTHOR : shreyamalogi

#include <bits/stdc++.h>
using namespace std ;

void solve()
{
    int n ;
    cin >> n ;
    int element , sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> element ;
            if(i == j or i + j == (n - 1) or i == n / 2 or j == n /2) 
                sum += element ;
        }
    }
    cout << sum << endl ;
}

int main()
{
    
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
