#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int a = v[0];
        int identical = 0;
        // cerr<<a<<" "<<b<<endl;
        for (int x : v)
        {
            if (x == a)
                identical++;
        }
        if (identical == n)
            cout << 0 << endl;
        else
        {
            
            int first = 0, last = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] != a)
                {

                    first = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] != a)
                {

                    last = i;
                    break;
                }
            }
            int firstAns = (last - first)+1;
            //===========================
            int b = v[n-1];
            first = 0, last = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] != b)
                {

                    first = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] != b)
                {

                    last = i;
                    break;
                }
            }
            int secondAns = (last-first)+1;

      
           cout<<min(firstAns,secondAns)<<endl;
           
        }
    }
}
