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
        int odd=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2!=0) 
            {
                odd++;
                v.push_back(x);
            }
            else v.push_back(x);
        }
        if(odd%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
}