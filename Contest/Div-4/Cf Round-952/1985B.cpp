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
        int index;
        int max = 0;
        for (int i = 2; i <= n; i++)
        {
            int sum = 0;
            for (int j = 1; j <= n; j++)
            {
                if (i * j <= n)
                    sum += j * i;
                else break;

               
            }
            if (sum > max)
            {
                max = sum;
                index = i;
            }
        }
        cout << index << endl;
    }
}