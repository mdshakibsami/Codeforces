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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            cout<<(n+1)-v[i]<<" ";
        }
        cout<<endl;
    }
}