/*
https://codeforces.com/problemset/problem/58/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool h=false,e=false,l=false,ll=false,o=false,done=false;
    for(int i=0;i<s.size();i++)
    {
        
         if(h && e && l && ll)
        {
            if(s[i]=='o') o=true;

        }
        else if(h && e && l)
        {
            if(s[i]=='l') ll=true;

        }
        else if(h && e)
        {
            if(s[i]=='l') l=true;

        }
        else if(h)
        {
            if(s[i]=='e') e=true;

        }
        else if(s[i]=='h') h=true;
    }
    if(h && e && l && e && o)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}