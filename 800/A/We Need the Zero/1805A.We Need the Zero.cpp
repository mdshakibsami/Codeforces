#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin>>v[i];

        int xor_sum = accumulate(v.begin(),v.end(),0,bit_xor<int>());

        if(n%2!=0) cout<<xor_sum<<endl;
        else
        {
            if(xor_sum==0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
       
    }
}