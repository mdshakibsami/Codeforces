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
        int countOne,countSame;

        int first = v[0],count=0;
        for(auto x:v) 
        {
            if(x==first) count++;
        }
        if(count==n) cout<<"NO"<<endl;
        else if(v[0]==1 && v[0]!=v[1]) cout<<"YES"<<endl;
        else if(v[0]==1 && v[1]==1) cout<<"NO"<<endl;
        else if(v[0]==v[1])
        {
            bool flag = false;
            for(int i=1;i<n;i++)
            {
                if(v[i]%v[0]!=0)
                {
                    flag = true;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;


        
    }
    
    
}