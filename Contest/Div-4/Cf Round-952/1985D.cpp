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
        int n,m;
        cin>>n>>m;
        char a[n][m];
        int rMax=0,cMax=0;
        int x,y;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='#') count++;
            }
            if(count>rMax){

             rMax=count;
             x=i;
            }
        }
        
        for(int i=0;i<m;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(a[j][i]=='#') count++;
                
            }
            if(count>cMax){

             cMax=count;
             y=i;
            }
        }
        cout<<x+1<<" "<<y+1<<endl;


    }
}