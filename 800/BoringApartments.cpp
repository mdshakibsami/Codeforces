#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, count = 0;
        cin >> x;
        int y = x % 10;
        while (x > 0)
        {
            x /= 10;
            count++;
        }
        int sum = 0;
        for (int i = 1; i <= count; i++)
            sum += i;
        cout << ((y - 1) * 10) + sum<<endl;
    }
}