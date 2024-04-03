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
        vector<int> v(n), temp, newV;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        //====================================
        temp = v;
        sort(temp.begin(), temp.end());
        if (temp == v)
            cout << "YES" << endl;
        else
        {

            int last = 0;
            for (int i = 0; i < n; i++)
            {
                int x, y;
                x = v[i] / 10;
                y = v[i] % 10;

                if (x <= y && x >= last)
                {
                    newV.push_back(x);
                    newV.push_back(y);
                    last = y;
                }
                else
                {
                    newV.push_back(v[i]);
                    last = v[i];
                }
            }
            temp = newV;
            sort(temp.begin(), temp.end());
            if (temp == newV)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
