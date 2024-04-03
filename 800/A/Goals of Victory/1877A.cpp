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
        int sum=0;
        vector<int>v;
        for(int i=0;i<n-1;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n-1;i++) sum+=v[i];

        if(sum>0) cout<<"-"<<sum<<endl;
        else cout<<abs(sum)<<endl;
    }
    
    
}