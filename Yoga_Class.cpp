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
        int n,x,y; cin>>n>>x>>y;

        int s, m;
        s= n*x;
        if(n%2==0)
        {
            m = (n/2)*y;
        }
        else
        {
            m= (n/2)*y;
            m+=x;
        }
        cout<<max(s,m)<<endl;

        
    }
}