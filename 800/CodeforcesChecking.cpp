#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string str = "codeforces";
        char s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < str.size(); i++)
        {
            if (s == str[i])
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}