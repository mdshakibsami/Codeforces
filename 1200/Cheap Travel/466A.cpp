/*
https://codeforces.com/problemset/problem/466/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n >= m)
    {
        int normal, special;
        normal = n * a;
        int r = n % m;
        special = ((n / m) * b);
        if (r > 0)
        {
            if (a <= b)
            {
                special += r * a;
            }
            else
                special += b;
        }
        if (normal <= special)
            cout << normal;
        else
            cout << special;
    }
    else
    {
        int normal = n * a;
        if (b <= normal)
            cout << b << endl;
        else
            cout << normal << endl;
    }
}
