#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n == 1 || n == 2)
            cout << 1 << endl;
        else
        {

            int y = x;
            x += 2;
            int floor = 2;
            while (x < n)
            {
                /* code */
                x += y;
                floor++;
            }
            cout << floor << endl;
        }
    }
}