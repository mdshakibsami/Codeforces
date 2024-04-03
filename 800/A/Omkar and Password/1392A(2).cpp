#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //this algo is more efficient 

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
       vector<long long >v(n);
       for(int i=0;i<n;i++) cin>>v[i];
       long long x= v[0];
       bool flag = false;
       for(int i=1;i<n;i++)
       {
         if(v[0]!=v[i])
         {
            flag = true;
            break;
         }
       }
       if(flag) cout<<1<<endl;
       else cout<<n<<endl;
    }
    
    
}