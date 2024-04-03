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
        int b,c,h;
        cin>>b>>c>>h;
        int cH = c+h;
        int needCH = b--;
        if(cH>=needCH)
        {
            int x = needCH+b;
            cout<<x<<endl;
        }
        else 
        {
            cout<<cH+(cH+1)<<endl;
        }
    }
    
    
}