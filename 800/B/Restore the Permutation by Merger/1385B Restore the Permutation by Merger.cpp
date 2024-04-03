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
        vector<int> v;
        unordered_map<int,int>um;
        for (int i = 0; i <2* n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            if(um[v[i]]==0) cout<<v[i]<<" ";
            um[v[i]]++;
            
        }
        cout<<endl;

    }
}