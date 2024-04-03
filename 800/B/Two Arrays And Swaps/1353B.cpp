#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n],arr2[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>arr2[i];

        sort(arr,arr+n);
        sort(arr2,arr2+n,greater<int>());
        
        int i=0;
        while (k>0 && i<n)
        {
            /* code */
            if(arr[i]<arr2[i])
            {
                
                int temp = arr[i];
                arr[i]=arr2[i];
                arr2[i]=temp;
                k--;
            }
            i++;
        }
        int sum=0;
         for(int i=0;i<n;i++)  sum+=arr[i];
         cout<<sum<<endl;
        
        
    }
}