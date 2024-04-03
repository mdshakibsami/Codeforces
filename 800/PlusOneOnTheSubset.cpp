#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,max=INT_MIN,min=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<min) min=x;
             if(x>max) max=x;


        }
        cout<<max-min<<endl;
    }
    
}