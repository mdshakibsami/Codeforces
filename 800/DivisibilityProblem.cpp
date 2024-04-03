#include<bits/stdc++.h>
using namespace std;
//TLE
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else
        {
            int r = a%b;
            cout<<b-r<<endl;
        }
    }
    
}