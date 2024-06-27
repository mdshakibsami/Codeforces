#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n,ans=0; cin>>n;
    string s,t,r="xxx"; cin>>s;

    for(int i=2;i<n;i++)
    {
        t="";
        t+=s[i-2];
        t+=s[i-1];
        t+=s[i];
        if(t==r) ans++;
    }
    cout<<ans<<endl;
}