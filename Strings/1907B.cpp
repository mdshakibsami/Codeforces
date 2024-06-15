#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s,t="";
        cin >> s;


        reverse(s.begin(), s.end());
        int b = 0, B = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
                b++;
            else if (s[i] == 'B')
                B++;
            else
            {
                if (b || B)
                {

                    if (b && (s[i] >= 'a' && s[i] <= 'z'))
                    {                                 
                        b--;
                        continue;
                    }
                    else if (B && (s[i] >= 'A' && s[i] <= 'Z'))
                    {
                        B--;
                        continue;
                    }
                    else
                        t+=s[i];
                }
                else t+=s[i];
            }
        }
        
        for(int i=t.size()-1;i>=0;i--) cout<<t[i];
        cout<<endl;
    }
}