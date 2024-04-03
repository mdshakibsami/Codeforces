
/*
https://codeforces.com/problemset/problem/233/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = n; i > 0; --i)
            cout << i << " ";
    }
    else cout<<-1<<endl;     
}