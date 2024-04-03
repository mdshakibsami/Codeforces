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
        int a,b;
        cin>>a>>b;
        if(a&1 && b&1 )
        {
            if(a!=1) cout<<a*b<<endl;
            else cout<<b*b<<endl;

        } 
        else cout<<b*2<<endl;
    }
}