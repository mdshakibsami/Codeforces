#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    string str = "abcdefghijklmnopqrstuvwxyz";
    bool found = false, notFound = false;
    for (int i = 0; i < n; i++)
    {

        cin >> s[i];
        s[i] = tolower(s[i]);
    }
    if (n >= 26)
    {
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            found = false;
            for (int j = 0; j < n; j++)
            {
                if (str[i] == s[j])
                {
                    found = true;
                    // cout<<found<<endl;
                    break;
                }
            }
            if (found)
                ;
            else
            {

                notFound = true;
                break;
            }
        }
        if (notFound)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}