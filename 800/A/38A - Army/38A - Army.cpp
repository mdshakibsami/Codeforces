#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    int arr[n-1];

    for(int i=0;i<n-1;i++)
        cin>>arr[i];

    cin>>a>>b;
    int sum=0;
    for(;a<b;a++)
    {
        sum+=arr[a-1];
    }
        
    
    cout<<sum<<endl;
    return 0;
}