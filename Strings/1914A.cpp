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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        map<char,int>mp,np;

        
        for(int i=0;i<26;i++)
        {
            mp[t[i]]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            np[s[i]]++;
        }

        int ans=0;
        for(auto x:np) 
        {
            auto it = mp.find(x.first);
            if(x.second>=it->second) ans++;
        }
        cout<<ans<<endl;

    }
}