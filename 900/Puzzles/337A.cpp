
/*
https://codeforces.com/problemset/problem/337/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int small=INT_MAX;
    while (v.size()>=n)
    {
        int max=INT_MIN,min=INT_MAX;
        for(int i=0;i<n;i++)
        {
          
            if(v[i]>max) max=v[i];
            if(v[i]<min) min=v[i];
        }
        v.erase(v.begin());
        int dif=max-min;
        if(dif<small)  small=dif;

    }
    cout<<small<<endl;
    
    
}