/*
https://codeforces.com/problemset/problem/230/A
*/

#include <bits/stdc++.h>
using namespace std;
//must check //
int main()
{

    int s, n, j = 0, k = 0;
    cin >> s >> n;
    int dragon[n], bonus[n];
    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {

            cin >> dragon[j];
            j++;
        }
        else
        {
            cin >> bonus[k];
            k++;
        }
    }
    // if all bonus are 0 then the bonus[n] is empty;
    for (int i = 0; i < n; i++)
        bonus[i] = bonus[i] + 1;

    int x = n;
    while (x--)
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            if (dragon[i] > 0 && s > dragon[i])
            {
                s += bonus[i] - 1;
                dragon[i] = -1;
                bonus[i] = 0;
            }
        }
    }

    bool no = false;
    for (int i = 0; i < n; i++)
    {
        if (bonus[i] > 0)
        {
            no = true;
            break;
        }
    }
    if (no)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}