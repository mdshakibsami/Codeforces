
/*
https://codeforces.com/problemset/problem/318/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, num, i, j; // be careful about datatype
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            for (i = 1, j = 1; i <= k; i++, j += 2)
                num = j;
        }
        else
        {
            for (i = (n / 2) + 1, j = 2; i <= k; i++, j += 2)
            {

                num = j;
            }
        }
    }
    else
    {
        if (k <= (n / 2) + 1)
        {
            for (i = 1, j = 1; i <= k; i++, j += 2)
                num = j;
        }
        else
        {
            for (i = (n / 2) + 1, j = 0; i <= k; i++, j += 2)
            {

                num = j;
            }
        }
    }
    cout << num;
}