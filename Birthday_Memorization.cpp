#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;

    vector<string>v;
    while(tc--)
    {
        string s,t=""; getline(cin,s);
        s.push_back(' ');
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                v.push_back(t);
                t="";
            }
            else 
            {
                t+=s[i];
                cerr<<t<<endl;
            }
        }

        
    }
   
}