#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%3==0) cout<<n/3<<" "<<n/3<<endl;
        else
        {
            int x=n%3;
            if(x==1)
            {
                int y=n/3;
                cout<<y+1<<" "<<y<<endl;
            }
            else if(x==2)
            {
                int y=n/3;
                cout<<y<<" "<<y+1<<endl;
            }
        }
       
    }
}