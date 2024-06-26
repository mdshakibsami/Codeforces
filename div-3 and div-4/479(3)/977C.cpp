#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int sum = 0;
    bool flag = false, flag2 = false;
    int ans;
    for (auto x : mp)
    {
        if (k == 0 && x.first > 1)
        {
            flag2 = true;
            break;
        }
        sum += x.second;
        if (sum == k)
        {
            flag = true;
            ans = x.first;
            break;
        }
        else if (sum > k)
            break;
    }
    if (flag2)
        cout << 1 << endl;
    else if (flag)
        cout << ans << endl;
    else
        cout << -1 << endl;
}
//Be careful about edge cases.