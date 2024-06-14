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
        string t ="",k="";

        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z') t+=s[i];
            else k+=s[i];
        }
        t = k+t;
        
        sort(t.begin(),t.end());

        if(t==s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}