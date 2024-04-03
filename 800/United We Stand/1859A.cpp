/*
https://codeforces.com/problemset/problem/1859/A
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
        vector<int>v(n);
        for(int i=0;i<n;++i) cin>>v[i];
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]) cout<<-1<<endl;
        else 
        {
            int b=0;
            for(int i=0;i<n;++i)
            {
                if(v[0]==v[i])
                {
                    b++;
                }
                else break;
            }
            int c=n-b;
            cout<<b<<" " <<c<<endl;
            for(int i=0;i<b;++i) cout<<v[i]<<" ";
            cout<<endl;
            for(int i=b;i<n;++i) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    
}