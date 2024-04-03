/*
https://codeforces.com/problemset/problem/584/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int n, t, r, count = 0;
    cin >> n >> t;
    if (t < 10)
    {
 
        for (int i = 0; i < n; i++)
            cout << t;
    }
    else if (t == 10 && n>=2)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << 1;
        }
        cout << 0 << endl;
    }
    else cout<<-1<<endl;
}
