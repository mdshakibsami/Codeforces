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
        int m=0,b=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x&1) b+=x;
            else m+=x;
        }
        if(m>b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}