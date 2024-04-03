#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string s;
       cin>>s;
       int j=0;
       int count=0;
       for(int i=s.size()-1;i>=0;i--)
       {
        int x=s[i]-'0';
        if(x!=0) count++;
       }
       cout<<count<<endl;
       for(int i=s.size()-1;i>=0;i--)
       {
        int x=s[i]-'0';
        if(x!=0)
        {

            cout<<x;
            for(int i=0;i<j;i++) cout<<0;
        }
        j++;
        cout<<" ";
       }
       cout<<endl;
        
    }
}