/*
Problem link:
https://codeforces.com/problemset/problem/80/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin>>x>>y;
    vector<int>v;
    v.push_back(2);
    int n=1;
    while (n<=50)
    {
        bool notPrime=false;
        n+=2;
        for(int i=2;i<n;++i)
        {
            if(n%i==0)
            {
                notPrime=true;
                break;
            }

        }
        if(!notPrime) v.push_back(n);
    }
    bool nextPrime=false;

    for(int i=0;i<v.size();++i)
    {
        if(v[i]==x && v[i+1]==y)
        {
            nextPrime=true;
        }
    }
    if(nextPrime) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
}