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
        string s;
        cin>>s;
        bool flag = true;
        for(int i=0;i<s.size();i++)
        {
            int x = s[i]-'0';
            if(x>=5 && x<=9) continue;
            else 
            {
                flag = false;
                break;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}