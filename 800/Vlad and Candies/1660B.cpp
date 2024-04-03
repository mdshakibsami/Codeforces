#include <bits/stdc++.h>
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
        if(n==1)
        {
            int x;
            cin>>x;
            if(x>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else
        {
            vector<int>v(n);
            for(int i=0;i<n;++i) 
            {
               cin>>v[i];
            }
            sort(v.begin(),v.end());
            if(v[n-1]-v[n-2]>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    

}