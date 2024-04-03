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
        long long n,k;
        cin>>n>>k;
        if(n%2==0) cout<<"YES"<<endl;
        else 
        {
            n-=k;
            if(n%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
}