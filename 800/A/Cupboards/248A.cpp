/*
https://codeforces.com/problemset/problem/248/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int temp = n;
    vector<int> l;
    vector<int> r;
    while (temp--)
    {
        int x, y;
        cin >> x >> y;
        l.push_back(x);
        r.push_back(y);
    }
    int lZero=0,rZero=0,lOne=0,rOne=0;
    for (int i = 0; i < n; ++i)
    {
        if (l[i] ==0) lZero++;
        else lOne++;
        if(r[i]==0) rZero++;
        else rOne++;
    }
    int left= min(lZero,lOne);
    int right=min(rZero,rOne);
    cout<<left+right<<endl;
}