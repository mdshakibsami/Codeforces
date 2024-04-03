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
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        long long ans = max(v[0]*v[1],v[n-1]*v[n-2]);
        cout<<ans<<endl;

    }
}