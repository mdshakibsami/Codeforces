#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<=t)
        {
            count++;
            if(sum==t) break;
        }
        else sum-=arr[i];
        
    }
    cout<<count<<endl;


    return 0;
}
