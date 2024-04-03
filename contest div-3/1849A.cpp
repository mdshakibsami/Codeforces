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
        int filler = c+h;
        int needFiller = b--;
        if(filler>=needFiller)
        {
            int x = needFiller+b;
            cout<<x<<endl;
        }
        else 
        {
            cout<<filler+(filler+1)<<endl;
        }
    }
    
    
}