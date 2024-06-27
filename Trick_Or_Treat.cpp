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
        int n,m; cin>>n>>m;
        vector<int>ca(n),ch(m),h1(m),h2(m);
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            int y = x%m;
            h1[y]++;
        }
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            int y = x%m;
            h2[y]++;
        }
        

        int ans = h1[0]*h2[0];
        for(int i=1;i<m;i++)
        {
            ans+= h1[i]*h2[m-i];
        }
        cout<<ans<<endl;

        
    }
}