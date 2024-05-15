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
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        vector<int> prefixSum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + v[i];
        }
        while (q--)
        {

            int l, r, k;
            cin >> l >> r >> k;
            int sum = prefixSum[n];
            sum -= (prefixSum[r] - prefixSum[l - 1]);
            sum += (r - l + 1) * k;

            if (sum & 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}