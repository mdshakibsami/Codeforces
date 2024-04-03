#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, str = "";
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            cout << '.';
            cout << c;
        }
    }
}