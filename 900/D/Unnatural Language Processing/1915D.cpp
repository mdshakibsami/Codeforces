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
        int n;
        cin >> n;
        vector<char> v;

        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            v.push_back(x);
        }
        v.push_back('0');
        v.push_back('0');
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 'a' || v[i] == 'e')
            {
                if (v[i + 2] == 'a' || v[i + 2] == 'e')
                {
                    
                    cout << v[i] << ".";
                }
                else
                {
                    if (v[i + 1] != '0')
                    {
                        cout << v[i] << v[i + 1] ;
                        if(v[i+2]=='0');
                        else cout<<'.';
                        i+=1;
                    }
                    else
                        cout << v[i];
                }
            }
            else if (v[i] != '0')
                cout << v[i];
        }
        cout << endl;
    }
}