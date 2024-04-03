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
        long long a, b, c, answer = 0;
        cin >> a >> b >> c;
        answer += b / 3;
        b = b % 3;
        if (b == 1 && c < 2 || b == 2 && c == 0)
            cout << -1 << endl;
        else
        {

            if (b == 1 && c >= 2)
            {
                answer++;
                c -= 2;
            }
            else if (b == 2 && c != 0)
            {
                answer++;
                c--;
            }
            if (c % 3 == 0)
                answer += c / 3;
            else
                answer += (c / 3) + 1;
            cout << answer+a << endl;
        }
    }
}