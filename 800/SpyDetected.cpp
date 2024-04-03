#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n],count=0;
        for(int i=1;i<=n;i++) 
        {
            cin>>arr[i];
            if(arr[1]==arr[i]) count++;
        }
        if(count>=2) 
        {
            for(int i=2;i<=n;i++)
            {
                if(arr[1]!=arr[i]) cout<<i<<endl;
            }
        }
        else cout<<1<<endl;
    }
    
    
}