/*
https://codeforces.com/problemset/problem/96/A
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int zero=0,one=0;
    //this is consisting 0 and 1 string
    bool flag=false;
    
    for(int i=0;i<s.size();i++)
    {
        
        if(s[i]=='0')
        { 
            zero++;
            one=0;
            if(zero>=7)
                flag=true;
            
        }
        else 
        {
           one++;
           zero=0;
            if(one>=7)
                flag=true;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}