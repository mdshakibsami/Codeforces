/*
https://codeforces.com/problemset/problem/69/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int x = 0;
        for (int j = 0; j < n; j++)

            x += arr[j][i];

        if (x != 0)
        {
            flag = true;

            break;
        }
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}