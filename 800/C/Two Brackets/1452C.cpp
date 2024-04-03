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
        int n,openP=0,openS=0,move=0;
        n = s.size();

        for(int i =0;i<n;i++)
        {
            if(s[i]=='(') openP++;
            else if(s[i]=='[') openS++;
            else if(s[i]==')')
            {
                if(openP>=1)
                {
                    move++;
                    openP--;
                }
            }
            else if(s[i]==']')
            {
                if(openS>=1)
                {
                    move++;
                    openS--;
                }
            }
        }
        cout<<move<<endl;
    }
    
}