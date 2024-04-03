#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    bool flag=false;
    for(int i=0,j=s.size()-1;i<s.size();i++,j--)
    {
        if(s[i]!=t[j])
            flag = true;
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}