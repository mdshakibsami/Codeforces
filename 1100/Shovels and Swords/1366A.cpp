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
        long long s, d;
        cin >> s >> d;
        cout<<min({s,d,(s+d)/3})<<endl;
    }
}