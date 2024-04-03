/*
Problem link:
https://codeforces.com/problemset/problem/1619/A
*/

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
        string s;
        cin >> s;
        int x = s.size();
        if (x % 2 == 0)
        {
            bool nMatch = false;
            for (int i = 0; i < s.size() / 2; ++i)
            {
                if (s[i] != s[(s.size() / 2) + i])
                {
                    nMatch = true;
                }
            }
            if (nMatch)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}