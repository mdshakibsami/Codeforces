#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = 5;
    bool flag = false;
    while (a--)
    {
        string str;
        cin >> str;
        for (int i = 0; i < 2; i++)
        {
            if (s[i] == str[i])
                flag = true;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
