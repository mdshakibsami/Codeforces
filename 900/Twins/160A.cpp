/*
https://codeforces.com/problemset/problem/160/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b) 
        {
            if((b-a)%2==0) cout<<2<<endl;
            else cout<<1<<endl;
        }
        else if(a==b) cout<<0<<endl;
        else if(a>b)
        {
            int x=a-b;
            if(x%2==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    
}