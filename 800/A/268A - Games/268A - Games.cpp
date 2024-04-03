#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>h,g;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        h.push_back(x);
        g.push_back(y);

    }
    int count=0;
    for(int i=0;i<h.size();i++)
    {
        for(int j=0;j<g.size();j++)
        {
            if(h[i]==g[j])count++;
        }
    }
    cout<<count<<endl;
    
}