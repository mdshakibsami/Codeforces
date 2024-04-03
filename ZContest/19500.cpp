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
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a && b<c) cout<<"STAIR"<<endl;
        else if(b>a && b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
    
    
}