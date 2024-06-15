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
        int n,m;
        cin>>n>>m;

        int ans= 0;

        for(int i=0;i<n;i++)
        {
            if(ans>m) ans--;
            else ans++;
        }
        
       if(ans==m) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
}