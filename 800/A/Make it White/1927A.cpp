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
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                break;
            }else count++;
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
              
                break;
            }
            else count++;
        }
        cout<<n-count<<endl;
    }
       
}