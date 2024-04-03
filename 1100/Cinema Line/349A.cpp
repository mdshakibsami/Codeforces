/*
https://codeforces.com/problemset/problem/349/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (v[0] == 100 || v[0] == 50)
        cout << "NO" << endl;
    else
    {
        int count25 = 0, count50 = 0;
        bool flag = false;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 25)
                count25++;
            else if (v[i] == 50)
            {
                count25 -= 1;
                count50++;
                if (count25 < 0)
                {
                    flag = true;
                    break;
                }
            }
            else if (v[i] == 100)
            {
                if (count50 > 0)
                {
                    count50--;
                    count25 -= 1;
                    if (count25 < 0)
                    {
                        flag = true;
                        break;
                    }
                }
                else
                {
                    count25 -= 3;
                    if (count25 < 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}