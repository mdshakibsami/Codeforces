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
        int n,m,ans=0;
        cin>>n>>m;
        char mat[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
            }
        }


        for(int i=0;i<m-1;i++)
        {
            if(mat[n-1][i]=='D') ans++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(mat[i][m-1]=='R') ans++;
        }
        cout<<ans<<endl;

    }
    
}