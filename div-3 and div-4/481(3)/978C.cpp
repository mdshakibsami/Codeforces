#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> dor(n), letter(m), pre_sum(n + 1);

    for (int i = 0; i < n; i++)
        cin >> dor[i];
    for (int i = 0; i < m; i++)
        cin >> letter[i];

    pre_sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum[i + 1] = pre_sum[i] + dor[i];
    }

    for (int i = 0; i < m; i++)
    {
        int index = lower_bound(pre_sum.begin(), pre_sum.end(), letter[i]) - pre_sum.begin();
        if (index == 1)
        {
            int room = letter[i];
            cout << index << " " << room << endl;
        }
        else
        {
            int room = letter[i] - pre_sum[index - 1];
            cout << index << " " << room << endl;
        }
    }
}