#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 10 == 0)
        {
            cout << 1 << endl;
            cout << n;
        }
        else
        {
            int zero = 0, j = 1, rim[j];
            while (n % 10 != 0)
            {
                zero++;
                rim[j] = n % 10;
                j++;
                n = n / 10;
                cout << rim[j] << " ";
            }
            if (n % 10 == 0)
            {
                rim[j] = n;
                zero++;
            }
            cout << zero << endl;
            for (int i = 1; i <=j; i++)
                cout << rim[i];
        }
    }
}