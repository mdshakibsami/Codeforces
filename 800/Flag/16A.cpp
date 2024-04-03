/*
https://codeforces.com/problemset/problem/16/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int temp=n;
     bool notMatched=false;
     vector<string>v;
    while (temp--)
    {
        string s;
        cin>>s;
        v.push_back(s);
        for(int i=0;i<m;++i)
        {
            if(s[0]!=s[i])
            {
                notMatched=true;
            }
        }
    }
    if(notMatched) cout<<"NO"<<endl;
    else 
    {
        bool matched=false;
        for(int i=1;i<v.size();++i)
        {
            if(v[i]==v[i-1])
            {
                matched=true;
                break;
            }
        }
        if(matched) cout<<"NO";
        else cout<<"YES";
    }
    
    
}