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
        int n,m,k,count=0;
        cin>>n>>m>>k;
        int arr[n],arr2[m];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<m;i++) cin>>arr2[i];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i]+arr2[j]<=k) count++;
            }
        }
        cout<<count<<endl;
     }
     
    
}