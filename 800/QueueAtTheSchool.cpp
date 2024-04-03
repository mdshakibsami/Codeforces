
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < s.size();)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char c = s[i + 1];
                s[i + 1] = s[i];
                s[i] = c;
                i += 2;
            }
            else
                i++;
        }
    }
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
}
