#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)%2==0) cout<<"##";
                else cout<<"..";
            }
            cout<<endl;
            for(int j=0;j<n;j++)
            {
                if((i+j)%2==0) cout<<"##";
                else cout<<"..";
            }
            cout<<endl;
        }
    }
    
    
}