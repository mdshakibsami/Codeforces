/*
https://codeforces.com/problemset/problem/489/B
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int boy[n];
    for (int i = 0; i < n; i++)
        cin >> boy[i];
    int m;
    cin >> m;
    int girl[m];
    for (int i = 0; i < m; i++)
        cin >> girl[i];

    //----------sort
    sort(boy, boy + n);
    sort(girl, girl + m);
    //------------
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(boy[i] - girl[j]) <= 1 && girl[j] != 0)
            {
                count++;
                girl[j] = 0;
                break;
            }
        }
    }
    cout << count << endl;
}