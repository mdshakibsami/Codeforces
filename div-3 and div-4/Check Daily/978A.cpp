#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n;
    cin >> n;
 
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
 
    vector<int> ans;
 
    for (int i = n - 1; i >= 0; --i)
    {
        //new way to search
        if (find(ans.begin(), ans.end(), v[i]) == ans.end())
            ans.push_back(v[i]);
    }
    reverse(ans.begin(), ans.end());
 
    cout << ans.size() << endl;
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}