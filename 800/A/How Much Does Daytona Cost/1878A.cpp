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
        int n,k;
        cin>>n>>k;
        vector<int>v;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            if(x==k) flag = true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}