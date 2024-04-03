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
        vector<int>v,newV;
        for(int i=0;i<n;i++) 
        {
            int x;
            cin>>x;
            v.push_back(x);
            
        }
        newV.push_back(v[0]);
        for(int i=1;i<n;i++)
        {
            if(v[i]<v[i-1])
            {
                newV.push_back(v[i]);
                newV.push_back(v[i]);
            }
            else newV.push_back(v[i]);
        }

        cout<<newV.size()<<endl;

        for(auto x:newV) cout<<x<<" ";
        cout<<endl;
    }
    
    
}