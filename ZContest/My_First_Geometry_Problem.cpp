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
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (s[i] == '1')
                count++;
        }
        if (count == 1)
        {
            cout << 11 << endl;
        }
        else if (count == 2)
        {
            if(s=="1100") cout<<21<<endl;
            else if(s=="0011") cout<<21<<endl;
            else cout<<121<<endl;
        }
        else if (count == 3)
        {
            cout << 231 << endl;
        }
        else if (count == 4)
        {
            cout << 441 << endl;
        }
    }
}