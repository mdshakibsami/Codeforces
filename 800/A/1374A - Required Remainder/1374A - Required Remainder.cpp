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
        int x,y,n;
        cin>>x>>y>>n;

        int div = n/x;
        int mul = (div*x)+y;
        if(mul<=n) cout<<mul<<endl;
        else cout<<mul-x<<endl;
    }
    

}