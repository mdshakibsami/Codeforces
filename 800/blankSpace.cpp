#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                flag=1;

        }
        if(flag==0)
            cout<<0<<endl;
        else
        {
            int count=0,blackSpace=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0)
                {
                    count++;
                    if(blackSpace<count)
                    {
                        blackSpace=count;
                    }
                }
                else
                {
                    count=0;
                }
            }
            cout<<blackSpace<<endl;
        }
    }
    return 0;
}