
/*
https://codeforces.com/problemset/problem/313/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = stoi(s);
    if (x > 0)
        cout << s << endl;
    else
    {
        int y = s[s.size() - 2] - '0';
        int x = s[s.size() - 1] - '0';

        if (x >= y)
        {

            for (int i = 0; i < s.size() - 1; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            if (s.size() == 3)
            {
                if (x == 0)
                    cout << 0 << endl;
                else
                {
                    for (int i = 0; i < s.size(); i++)
                    {
                        if (i == s.size() - 2)
                            continue;
                        cout << s[i];
                    }
                }
            }
            else
            {

                for (int i = 0; i < s.size(); i++)
                {
                    if (i == s.size() - 2)
                        continue;
                    cout << s[i];
                }
            }
        }
    }
}