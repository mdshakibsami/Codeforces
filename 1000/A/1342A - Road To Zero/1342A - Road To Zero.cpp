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
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long dif = abs(x - y);
        long long mi = min(x, y);

        if(2*a<b)
        {
            cout<<a*(x+y)<<endl;
        }
        else
            cout << ((a * dif) + (mi * b)) << endl;
    }
}