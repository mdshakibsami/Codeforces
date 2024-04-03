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
    int cOne =0,cZero = 0;
        for(int i=0;i<s.size();i++ )
        {
            if(s[i]=='0') cZero++;
            else cOne++;
        }
        int mi = min(cOne,cZero);

        if(mi&1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;        
    }

}