#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int dot = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '.')
            {
                dot++;
                count++;
                if (count == 3)
                {
                    flag = true;
                    break;
                }
            }
            else
                count = 0;
        }

        if (flag)
            cout << 2 << endl;
        else
            cout << dot << endl;
    }
}