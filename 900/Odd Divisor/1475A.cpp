/*
https://codeforces.com/problemset/problem/1475/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        if(n%2==0)
        {
            bool found=false;
            while (n!=1)
            {
                n/=2;
                if(n>1 && n%2!=0)
                {
                    found=true;
                    break;
                }
            }
            
            if(found) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    
}