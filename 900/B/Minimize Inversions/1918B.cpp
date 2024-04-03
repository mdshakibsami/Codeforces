#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v1(n),v2(n);
        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];
        
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[v1[i]]=v2[i];
        }
    
        sort(v1.begin(),v1.end());
        for(auto x:v1) cout<<x<<" ";
        cout<<endl;
        for(auto x:v1)
        {
            cout<<m[x]<<" ";
            
        }
        cout<<endl;
    }
    
}