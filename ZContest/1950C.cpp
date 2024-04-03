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
        string s;
        cin>>s;

        int h = (s[0]-'0')*10+s[1]-'0';
        if(h==0) cout<<12<<s[2]<<s[3]<<s[4]<<" AM"<<endl;
        else if(h<12) cout<<s<<" "<<"AM"<<endl;
        else if(h==12) cout<<s<<" PM"<<endl;
        else if(h>12)
        {
            if(h-12<10)
         cout<<0<<h-12<<s[2]<<s[3]<<s[4]<<" PM"<<endl;
         else cout<<h-12<<s[2]<<s[3]<<s[4]<<" PM"<<endl;
        }
    }
    
}