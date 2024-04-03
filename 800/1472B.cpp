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
        int n, one = 0, two = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                one++;
            else
                two++;
        }
        int rTwo = two % 2;
        if (one >= rTwo * 2)
        {
            one = one- rTwo * 2;
            if (one % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}