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
        int n, k;
        cin >> n >> k;
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int i = 0; i < n; i++)
            cin >> v2[i];

        sort(v1.begin(), v1.end());
        sort(v2.rbegin(), v2.rend());

        if (v1[0] == v2[0] || k == 0)
        {
            int sum = 0;
            for (auto x : v1)
                sum += x;
            cout << sum << endl;
        }
        else
        {

            while (k--)
            {
                if( v1[0]<v2[0])
                int temp = v1[0];
                v1[0] = v2[0];
                v2[0] = temp;
                sort(v1.begin(), v1.end());
                sort(v2.rbegin(), v2.rend());

                
            }
            

            int sum = 0;
            for (auto x : v1)
                sum += x;
            cout << sum << endl;
        }
    }
}