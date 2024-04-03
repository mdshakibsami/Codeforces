/*
https://codeforces.com/problemset/problem/131/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        if (s[0] >= 'A' && s[0] <= 'Z')
        {

            char x = tolower(s[0]);

            cout << x;
        }
        else
        {
            char x = toupper(s[0]);

            cout << x;
        }
    }
    else
    {

        bool Found;
        for (int i = 1; i < s.size(); i++)
        {
            Found = false;
            if (s[i] >= 'A' && s[i] <= 'Z')
                Found = true;
            if (Found == false)
                break;
        }
        if (Found)
        {
            char x = s[0];
            if (x >= 'a' && x <= 'z')
            {
                x = toupper(s[0]);
                cout << x;
                for (int i = 1; i < s.size(); i++)
                {
                    char y = tolower(s[i]);
                    cout << y;
                }
            }
            else
            {
                for (int i = 0; i < s.size(); i++)
                {
                    char x = tolower(s[i]);
                    cout << x;
                }
            }
        }
        else
            cout << s;
    }
}