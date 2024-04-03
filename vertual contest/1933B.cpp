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
        int sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            v.push_back(x);
        }

        if (sum % 3 == 0)
            cout << 0 << endl;

        else
        {
            bool flag_one = false;
            for (int i = 0; i < n; i++)
            {
                int temp = sum-v[i];
                if (temp%3==0)
                {
                    flag_one = true;
                    break;
                }
            }
            if (flag_one)
                cout << 1 << endl;
            else
            {

                int div = sum / 3;
                int current = div * 3;
                int next = (div + 1) * 3;

                int x = abs(sum - current);
                int y = abs(next - sum);

                if (x < y)
                {
                    bool flag = false;
                    for (int i = 0; i < n; i++)
                    {
                        if (x == v[i])
                        {
                            flag = true;
                            break;
                        }
                    }
                    if (flag)
                        cout << x << endl;
                    else
                        cout << y << endl;
                }
                else
                    cout << y << endl;
            }
        }
    }
}