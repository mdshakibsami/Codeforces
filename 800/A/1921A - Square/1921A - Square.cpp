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
        long long x1,y1;
        cin>>x1>>y1;
        long long x2,y2;
        cin>>x2>>y2;
        long long x3,y3;
        cin>>x3>>y3;
        long long x4,y4;
        cin>>x4>>y4;

        if(x1==x2 ) 
        {
            int a = y1-y2;
            cout<<abs(a*a)<<endl;
        }
        else
        {
            int a = x1-x2;
            cout<<abs(a*a)<<endl;
        }
    }
    
}