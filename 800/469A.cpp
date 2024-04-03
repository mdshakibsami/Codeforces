#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p,q;
    cin >> n >> p;
    vector<int> v;
    for (int i = 0; i < p; ++i)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cin>>q;
    for(int i=0;i<q;++i)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    auto finalV= unique(v.begin(),v.end());
    v.erase(finalV,v.end());
    if(v.size()==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
    