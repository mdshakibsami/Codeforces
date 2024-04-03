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
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int r[n]={0},c[m]={0},count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==1)
                {
                    r[i]=1;
                    c[j]=1;
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(r[i]==0 && c[j]==0)
                {
                    r[i]=1;
                    c[j]=1;
                    count++;
                    arr[i][j]=1;
                }

            }
        }


        if(count%2==0) cout<<"Vivek"<<endl;
        else cout<<"Ashish"<<endl;

        
    }
    
}