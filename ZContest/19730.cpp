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
        int a, b, c;
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
            cin >> v[i];
        int count = 0;
        while (true)
        {
            sort(v.begin(), v.end());
            if (v[0] <= 0 && v[1] <= 0)
                break;
            else
            {
                count++;
                v[1] = v[1] - 1;
                v[2] = v[2] - 1;
            }
        }
        if(v[2]%2==0)cout<<count<<endl;
        else cout<<-1<<endl;
    }
}