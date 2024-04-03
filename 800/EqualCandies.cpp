#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n],min=INT_MAX;
        for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        if(arr[i]<min) min=arr[i];

        } 
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i]-min;
        }
         cout<<sum<<endl;
    }
}