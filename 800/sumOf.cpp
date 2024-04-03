#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                sum-=arr[i]*arr[i];
            }
            else
            {
                sum+=arr[i]*arr[i];
            }
        }
        cout<<sum<<endl;
    }
    

    return 0;
}