/* problem link: 
https://codeforces.com/problemset/problem/1850/D
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, dif;
        cin >> n >> dif;
        int problem[n];
        for (int i = 0; i < n; ++i)
            cin >> problem[i];
        sort(problem, problem + n);
        int count = 0, max = 0;
        for (int i = 1; i < n; ++i)
        {
            if (abs(problem[i] - problem[i - 1]) <= dif)
            {
                count++;
                if (count >= max)
                    max = count;
            }
            else
                count = 0;
        }
         cout << n - (max + 1) << endl;
    }
}