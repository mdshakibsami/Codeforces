#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n; cin>>n;
    string s,t; cin>>s;

    map<string,int>mp;
    for(int i = 1;i<n;i++)
    {
        t="";
        t+= (s[i-1]);
        t+=(s[i]);
        mp[t]++;
    }
    int mx = 0;
    for(auto x:mp)
    {
        if(x.second>mx)
        {
            mx= x.second;
            t = x.first;
        }
    }
    cout<<t<<endl;
}