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
        int sum=0;
        int temp = n;
        while (temp--)
        {
            int x; cin>>x;
            sum+=x;
        }
        if(sum<n) cout<<1<<endl;
        else cout<<abs(sum-n)<<endl;
        
    }
}