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
        int n, k, x;
        cin >> n >> k >> x;
        if (x == 1)
        {
            if (x == 1 && k == 1)
                cout << "NO" << endl;
            else if (n % 2 == 0)
            {
                cout << "Yes" << endl;
                int x = n / 2;
                cout << x << endl;
                for (int i = 0; i < x; i++)
                    cout << 2 << " ";
                cout << endl;
            }
            else
            {
                if (x == 1 && k == 2) cout << "No" << endl;
                else
                {
                cout << "Yes" << endl;
                int x = n / 2;
                cout << x<< endl;
                for (int i = 0; i < x-1; i++)
                    cout << 2 << " ";
                cout <<3<<endl;
                }
            }
        }
        else
        {
            cout << "Yes" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;
        }
    }
}