#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int x=s.size();
        if(x%2==0)
        {
            int a=0,b=0,c=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='A') a++;
                else if(s[i]=='B') b++;
                else if(s[i]=='C') c++;
            }
            if(a==b && c==0) cout<<"YES"<<endl;
            else if(b==c && a==0) cout<<"YES"<<endl;
            else if(a<=b && a<=c)
            {
                b=b-a;
                if(b==c) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(c<=b && c<=a)
            {
                b=b-c;
                if(a==b) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
    }
    
}
