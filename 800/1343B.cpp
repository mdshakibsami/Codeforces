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
        int x = n / 2;
        if (x % 2 == 0)
        {
            cout << "YES" << endl;
            int even = 0, odd = 0;
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                even += i;
            }
            int j = 1;
            for (int i = 1; i < x; i++)
            {
                cout << j << " ";
                odd += j;
                j += 2;
            }
            cout << even - odd;
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}