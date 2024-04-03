#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max) 
        {
            count++;
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            count++;
            min=arr[i];
        }
    }
    cout<<count<<endl;
}