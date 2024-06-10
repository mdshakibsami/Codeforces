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
        int x, y;
        cin >> x >> y;
        if (y == 1)
        {
            int ans = 1;
            if(x>11)
            {
                x-=11;
                if(x%=15) ans+=x/15;
                else ans+=(x/15)+1;
            }
            cout<<ans<<endl;


        }
        else
        {
            int ans = 0;
            if (y % 2 == 0)
                ans += y / 2;
            else
                ans += (y / 2) + 1;

            int freeCell = (ans * 15) - (ans * 8);

            if (x > freeCell)
            {
                x -= freeCell;
                if (x % 15 == 0)
                {
                    ans += (x / 15);
                }
                else
                {
                    ans += (x / 15) + 1;
                }
            }
            cout << ans << endl;
        }
    }
}