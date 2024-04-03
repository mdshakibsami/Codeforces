/*
Problem link:
https://codeforces.com/contest/1850/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}