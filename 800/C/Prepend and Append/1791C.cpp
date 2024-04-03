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
        deque<char> dq;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            dq.push_back(x);
        }

        while (true)
        {
            if (dq.empty())
                break;
            else
            {
                if ((dq.front() == '1' && dq.back() == '0' || dq.front() == '0' && dq.back() == '1'))
                {
                    dq.pop_front();
                    dq.pop_back();
                }
                else
                    break;
            }
        }
        if (dq.empty())
            cout << 0 << endl;
        else
            cout << dq.size() << endl;
    }
}