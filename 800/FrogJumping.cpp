#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(k%2==0)
        {
            int x=k/2;
            cout<<(a*x)-(b*x)<<endl;
        }
        else 
        {
            int x=k/2;
            cout<<(a*(x+1))-b*x<<endl;
        }
        
    }
    
    
}