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
        int arr[n];
        int pre[n + 1];
        pre[0] = 0;
        int rPre[n + 1];
        rPre[0] = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            pre[i + 1] = arr[i] + pre[i];
        }

        reverse(arr,arr+n);

        for (int i = 0; i < n; i++)
        {
            rPre[i+1] = arr[i] + rPre[i];
        }



        int index1 = 0;
        int index2 = 0;

        for (int i = n; i >= 0; i--)
        {
            if (pre[i] % 2 == 0)
            {
                index1 = i;
                break;
            }
        }
        for (int i = n; i >= 0; i--)
        {

            if (rPre[i] % 2 == 0)
            {
                index2 = i;
                break;
            }
        }

        cout << max(index1, index2) << endl;
    }
}