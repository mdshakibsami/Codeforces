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
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0) cout<<0<<endl;
        else if(((int)sqrt(x*x+y*y))==(sqrt(x*x+y*y))) cout<<1<<endl;
        else cout<<2<<endl;
    }
    
}