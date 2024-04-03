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
        string s;
        cin >> s;

        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }

        int sumOne = 0, sumEven = 0;
        for (auto &x : m)
        {
            if (x.second == 1)
                sumOne++;
            else if (x.second % 2 == 0)
            {
                sumEven += x.second;
            }
            else
            {
                sumEven += (x.second / 2);
                sumEven *= 2;
                sumOne++;
            }
        }

        if (sumOne == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            sumOne = (sumOne - k);
            if (sumOne <= 1)
                cout << "YES" << endl;
            else cout<<"NO"<<endl;
           
        }
    }
}