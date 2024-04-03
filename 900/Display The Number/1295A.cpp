/*
https://codeforces.com/problemset/problem/1295/A
*/

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
        int n;
        cin>>n;
        if(n%2==0)
        {
            int x=n/2;
            for(int i=0;i<x;++i) cout<<1;
            cout<<endl;
        }
        else 
        {
            n-=3;
            cout<<7;
            int x=n/2;
            for(int i=0;i<x;++i) cout<<1;
            cout<<endl;
        }
        
    }
    
    
}