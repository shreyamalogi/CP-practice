#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;

void solve()
{
    string s1,s2,s3;cin>>s1>>s2>>s3;
    map<char,ll> M1,M2;
    for(ll i=0;s1[i];++i)++M1[s1[i]];
    for(ll i=0;s2[i];++i)++M1[s2[i]];
    for(ll i=0;s3[i];++i)++M2[s3[i]];
    if(M1.size()!=M2.size())
    {
        cout<<"NO\n";return;
    }
    for(auto i : M1)
    {
        if(i.second!=M2[i.first])
        {
            cout<<"NO\n";return;
        }
    }

    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}
