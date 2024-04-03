#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int long a, b, n, count = 0;
        cin >> a >> b >> n;
        bool boolA = true;
        while (a <=n && b <=n)
        {
            count++;
            if(a<b)
            a+=b;
            else
            b+=a;
        }

        cout << count << endl;
    }
}