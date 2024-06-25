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
        int n, a, b;
        cin >> n >> a >> b;

        if (a >= b)
            cout << n * a << endl;
        else
        {
            int dif = b - a;
            if (dif<n)
            {
                int toA = (a * (a + 1)) / 2;
                int toB = (b * (b + 1)) / 2;
                int ans = toB - toA;
                ans = ans + ((n - dif) * a);
                cout << ans << endl;
            }
            else
            {
                int addA = dif-n;
                a+=addA;
                int toA = (a * (a + 1)) / 2;
                int toB = (b * (b + 1)) / 2;
                cout<<toB-toA<<endl;

            }
        }
    }
}