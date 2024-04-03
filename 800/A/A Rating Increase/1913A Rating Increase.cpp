#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        string s,s2,s1;
        cin>>s;
        bool flag =true;
        s1 +=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!='0') flag = false;
            if(flag )
            {
                s1+=s[i];

            }
            else s2+=s[i];
        }
        int x,y;
        if(s1==s) 
        {
            x=s[0]-'0';
            y = 0;
        }
        else
        {

        x = stoi(s1);
        y = stoi(s2);
        }
        if(y>x) cout<<x<<" "<<y<<endl;
        else cout<<-1<<endl;
    }
}