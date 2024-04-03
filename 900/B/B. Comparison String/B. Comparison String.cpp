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
        string str;
        cin>>str;

        int g=0,l=0,ans=0;
       
       for(int i=0;i<n;i++)
       {
        if(str[i]=='>')
        {
            g++;
            l=0;
            if(g>ans ) ans = g;
        }
        else
        {
            l++;
            g=0;
            if(l>ans) ans = l;
        }
       }
       cout<<ans+1<<endl;
    }
       
}