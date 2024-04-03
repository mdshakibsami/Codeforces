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
        int n;
        cin >> n;
        vector<int> v(n), vSort(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vSort = v;
        sort(vSort.begin(), vSort.end());
        int diff =v[1] - v[0];
        if (v == vSort)
        {
            for (int i = 0; i < n - 1; i++)
            {
                int x = v[i + 1]-v[i];
                if (x < diff)
                {
                    diff = x;
                }
            }
            cout<<(diff/2)+1<<endl;
        }
        else
            cout << 0 << endl;
    }
}