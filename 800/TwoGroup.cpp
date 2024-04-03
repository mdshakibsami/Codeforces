#include <bits/stdc++.h>
using namespace std;
// occurs signed integer overflow,then i used long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin>>n;
        int arr[n];
        long long pSum=0,nSum=0;
        for(int i=0;i<n;i++)
        {

            cin>>arr[i];
            if(arr[i]>=0)
            {
                pSum+=arr[i];
            }
            else
            {
                nSum+=abs(arr[i]);
            }
        }
        cout<<abs(pSum-nSum)<<endl;

            
    }
}