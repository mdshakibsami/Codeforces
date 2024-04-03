#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char s[6];
        int a=0,b=0;
        for(int i=0;i<6;i++)
        {
            cin>>s[i];
            int x =s[i]-'0';
            if(i<3) a+=x;
            else b+=x;

        }
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}