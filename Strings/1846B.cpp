#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        char a[3][3];

        string s,t,y;
        cin>>s>>t>>y;

        a[0][0] =s[0];
        a[0][1] =s[1];
        a[0][2] =s[2];
        
        a[1][0] =t[0];
        a[1][1] =t[1];
        a[1][2] =t[2];
        
        a[2][0] =y[0];
        a[2][1] =y[1];
        a[2][2] =y[2];


        if(a[0][0]!='.' && a[0][0]==a[0][1] && a[0][0]== a[0][2]) cout<<a[0][0]<<endl;
        else if(a[1][0]!='.' && a[1][0]==a[1][1] && a[1][0] == a[1][2]) cout<<a[1][0]<<endl;
        else if(a[2][0]!='.' && a[2][0]==a[2][1] && a[2][0]== a[2][2]) cout<<a[2][0]<<endl;

        else if(a[0][0]!='.' && a[0][0]==a[1][0] && a[0][0]== a[2][0]) cout<<a[0][0]<<endl;
        else if(a[0][1]!='.' && a[0][1]==a[1][1] && a[0][1]== a[2][1]) cout<<a[0][1]<<endl;
        else if(a[0][2]!='.' && a[0][2]==a[1][2] && a[0][2]== a[2][2]) cout<<a[0][2]<<endl;

        else if(a[0][0]!='.' && a[0][0]==a[1][1] && a[0][0]== a[2][2]) cout<<a[0][0]<<endl;
        else if(a[0][2]!='.' && a[0][2]==a[1][1] && a[0][2]== a[2][0]) cout<<a[1][1]<<endl;
        else cout<<"DRAW"<<endl;

        
        
    }
}