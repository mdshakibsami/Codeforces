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
        int n,score =0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<2*n;i++) 
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<int>());
      
        for(int i=0;i<2*n-1;i++)
        {
            score+=min(v[i],v[i+1]);
            i++;
        }
        cout<<score<<endl;
    }
    
}