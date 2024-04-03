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
        int a=1,even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(a==1)
            {
                if(x%2!=0) odd++;
                a=2;
            }
            else if(a==2)
            {
                if(x%2==0) even++;
                a=1;
            }
        }
    
        if(odd==even) cout<<odd<<endl;
        else cout<<-1<<endl;
    }
    
    
}