#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() > 1)
    {

        int count = 0;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            count++;
            if (count == 2)
            {

                cout << *it << endl;
                break;
            }
        }
    }
    else
        cout << "NO" << endl;
}