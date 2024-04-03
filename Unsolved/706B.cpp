#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end(),greater<int>());
    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        ll count = 0;
        int index;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
           
            if (x >= v[i])
            {
                index = i;
                flag = true;
                break;
            }
            
        }
        if(flag)
        cout << n-index << endl;
        else cout<<0<<endl;
    }
}