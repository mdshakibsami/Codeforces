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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] >= 2 && v[i - 1] > 0 && v[i + 1] > 0)
            {
                int x = v[i] / 2;
                if (x <= v[i - 1] && x <= v[i + 1])
                {
                    v[i] -= x * 2;
                    v[i - 1] -= x;
                    v[i + 1] -= x;
                }
                else
                {
                    int mi = min(v[i - 1], v[i + 1]);
                    v[i] -= mi * 2;
                    v[i - 1] -= mi;
                    v[i + 1] -= mi;
                }
            }
        }
        bool flag = true;
        for(auto x:v)
        {
            if(x!=0)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}