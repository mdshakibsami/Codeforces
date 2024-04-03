#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        int x=0,y=0;
        bool passed = false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U') y++;
            else if(s[i]=='D') y--;
            else if(s[i]=='R') x++;
            else if(s[i]=='L') x--;
            if(x==1 && y==1)
            {
                passed =true;
                break;
            }
        }
        if(passed) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
}
