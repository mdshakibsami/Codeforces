#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=5-x;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            count++;
        }
    }
    cout<<count/3<<endl;
}