#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    string s,s2="yes";
    int flag=0;
    cin>>s;
    for(int i=0;i<3;i++)
    {
        char x= tolower(s[i]);
        if(x!=s2[i]) flag=1;
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   }
   
}