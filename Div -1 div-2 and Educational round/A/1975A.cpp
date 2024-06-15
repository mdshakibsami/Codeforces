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
        deque<int> v(n), vSort;

        for (int i = 0; i < n; i++)
            cin >> v[i];

        vSort = v;
        sort(vSort.begin(), vSort.end());

        if (vSort == v)
            cout << "Yes" << endl;
        else
        {
            int index;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i + 1] < v[i])
                {
                    index = i+1;
                    break;
                }
            }

            for(int i=index;i<n;i++)
            {
                int x = v.back();
                v.pop_back();
                v.push_front(x);
            }

            if(v==vSort) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}