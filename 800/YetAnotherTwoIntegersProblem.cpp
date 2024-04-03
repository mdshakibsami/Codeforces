#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b;
        if (a > b)
            x = a - b;
        else
            x = b - a;

        if (x % 10 == 0)
            cout << (x / 10) << endl;
        else
            cout << (x / 10) + 1 << endl;
    }
}