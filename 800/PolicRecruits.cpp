#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,polic=0,untreatd=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==-1)
        {
            if(polic==0) untreatd++;
            else polic--;

        }
        else
        {
            polic+=arr[i];

        }

    }
    cout<<untreatd<<endl;
}