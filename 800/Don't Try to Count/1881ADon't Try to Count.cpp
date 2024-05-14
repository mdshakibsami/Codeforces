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
        int a, b;
        cin >> a >> b;
        string x, s;
        cin >> x >> s;

        if (x.find(s) != -1)
        {
            cout << 0 << endl;
        }
        else
        {
            int xSize = x.size();
            int sSize = s.size();
            if (sSize <= xSize)
            {
                string temp;
                temp = x + x;
                if (temp.find(s) != -1)
                {
                    cout << 1 << endl;
                }
                else cout<<-1<<endl;
            }
            else
            {
                int count = 0;
                bool flag = false;

                while (x.size()<2*sSize)
                {
                    x += x;
                    count++;
                    if (x.find(s) != -1)
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag) cout<<count<<endl;
                else cout<<-1<<endl;
            }
        }
    }
}
