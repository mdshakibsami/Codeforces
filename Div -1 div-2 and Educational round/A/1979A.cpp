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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int mn = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int mx = 0;
            for (int j = i + 1; j < n; j++)
            {
                int x = max(v[i], v[j]);
                if (x > mx)
                {
                    mx = x;
                    if(mx<mn) mn = mx;
                }
            }
        }
        
            cout<<--mn<<endl;
       
    }
}