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
        string s;
        cin >> s;
        int first = s[0] - '0';
        cout << (first + ((s.size() - 1) * 9)) << endl;
    }
}