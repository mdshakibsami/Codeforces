/*
Problem link:
https://codeforces.com/problemset/problem/43/A
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> v;
    vector<int> vInt;
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                x++;
            }
        }
        vInt.push_back(x);
    }
    int max = INT_MIN, index;
    for (int i = 0; i < vInt.size(); ++i)
    {
        if (vInt[i] > max)
        {
            max = vInt[i];
            index = i;
        }
    }
    cout << v[index];
}