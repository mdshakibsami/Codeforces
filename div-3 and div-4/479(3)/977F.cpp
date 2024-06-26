#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    //finding large value not travering 10^9 elemets
    //that would give tle in normal traversing
    map<int, int> dp;
    int mx = 0, mx_num = 0;
    for (int i = 0; i < n; i++)
    {
        dp[v[i]] = dp[v[i] - 1] + 1;
        if (dp[v[i]] > mx)
        {
            mx = dp[v[i]];
            mx_num = v[i];
        }
    }

    vector<int> ansv;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == mx_num)
        {
            ansv.push_back(i);
            mx_num--;
        }
    }

    reverse(ansv.begin(),ansv.end());
    cout<<ansv.size()<<endl;
    for(auto x:ansv) cout<<++x<<" ";
    cout<<endl;
}