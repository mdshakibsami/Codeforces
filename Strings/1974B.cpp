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
        int n;
        cin>>n;

        string s;
        cin>>s;

        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }

        string t ="";
        for(auto x:m) t+=x.first;

        map<char,char>m2;
        int lenT = t.size();

        for(int i=0;i<lenT/2;i++)
        {
            m2[t[i]] = t[lenT-1-i];
        }
        for(int i=0;i<lenT/2;i++)
        {
           m2[t[lenT-1-i]] =  t[i];
        }

        if(lenT%2!=0) m2[t[(lenT/2)]] = t[(lenT/2)];

        for(int i=0;i<n;i++)
        {
            cout<<m2[s[i]];
        }
        cout<<endl;
    }

}