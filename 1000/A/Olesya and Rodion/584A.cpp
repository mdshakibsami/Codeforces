#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string t;
    cin >> n;
    cin>> t;
    // cout<<len;
    if (n == 1)
    {
        if (t.size() == 2)
            cout << -1 << endl;
        else
            cout << t << endl;
    }
    else
    {
        
        if (t.size() == 2)
            n -= 2;
        else
            n--;
        while (n)
        {
            n--;
            t += '0';
        }

        cout << t << endl;
    }
}