#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else
            upper++;
    }
    if (lower >= upper)
    {

        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
            cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
            cout << s[i];
        }
    }
}