#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> vv, tv;
    map<int, vector<int>> mp;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        if (!mp[a].empty())
        {
            mp[a].insert(mp[a].begin() + b, -1);
            mp[a].erase(mp[a].begin() + (b + 1));
        }
        else
        {
            mp[a] = v;
            mp[a].insert(mp[a].begin() + b, -1);
            mp[a].erase(mp[a].begin() + (b + 1));
        }

        if (!mp[b].empty())
        {
            mp[b].insert(mp[b].begin() + a, -1);
            mp[b].erase(mp[b].begin() + (a + 1));
        }
        else
        {
            mp[b] = v;
            mp[b].insert(mp[b].begin() + a, -1);
            mp[b].erase(mp[b].begin() + (a + 1));
        }
    }



    int sub = 0;
    for (int i = 0; i < n; i++)
    {
        tv = mp[i];
        bool flag = false;
        if (mp[i].empty())
        {
            flag = true;
            tv = v;
        }
      
        sort(tv.begin(), tv.end());
       

        int l = -1, r = tv.size();
        while (r - l > 1)
        {
            int m = (l + r) / 2;
            (tv[m] < v[i]) ? l = m : r = m;
        }

        int ll = -1, rr = tv.size();
        while (rr - ll > 1)
        {
            int m = (ll + rr) / 2;
            (tv[m] <= -1) ? ll = m : rr = m;
        }

        if (flag)
        {
            cout << r << " ";
        }
        else
        {
            cout << r - ll - 1 << " ";
        }
    }
}