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
        long long x;
        x = 1;
        while (x<=n)
        {
            x*=2;
        }
        cout<<x/2<<endl;
        

    }
    
}