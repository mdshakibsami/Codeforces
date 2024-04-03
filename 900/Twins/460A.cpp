#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x, y,l=0,sum=0;
    while (true)
    {
        /* code */
        x = (n / m)-l;
        n += x;
        y = (n / m)-l;
        sum+=y;
        n += (y - x);
        if (y ==x)
            break;
        else l=sum;
    }

    cout << n + (y - x) << endl;
}
