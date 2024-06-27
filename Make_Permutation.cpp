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
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());

        bool flag = false;
        for(int i=1;i<=n;i++)
        {
            if(v[i-1]>i) 
            {
                flag = true;
                break;
            }
        }

        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}