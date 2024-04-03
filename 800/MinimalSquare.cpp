#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            b*=2;
            if(b>=a) cout<<b*b<<endl;
            else cout<<a*a<<endl;
        }
        else
        {
            a*=2;
            if(a>=b) cout<<a*a<<endl;
            else  cout<<b*b<<endl;
        }

        
    }
}