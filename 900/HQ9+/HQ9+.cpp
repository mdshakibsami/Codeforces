/*
https://codeforces.com/problemset/problem/133/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q'||s[i]=='9')
        {
            //don't need to check '+' ,cause 
            // it'll print no outputs.
            flag =true;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
