#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        string s,t;
        cin>>s>>t;

        swap(s[0],t[0]);
        cout<<s<<" "<<t<<endl;
    }
}