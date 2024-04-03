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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        long long sum =0;
        for(int i=1;i<n;i++)
        {
            sum+= v[i]-v[i-1];
            
        }
        cout<<sum<<endl;
    }
    
}