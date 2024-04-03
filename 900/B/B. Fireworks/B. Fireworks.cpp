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
        long long a,b,m;
        cin>>a>>b>>m;
        a = m/a;
        b = m/b;
        cout<<(a+b)+2<<endl;
    }
    
    
}