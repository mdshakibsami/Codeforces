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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int mi = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            mi = min(mi,(v[i+1]-v[i]));
        }
        cout << mi << endl;
    }
}