#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]=0;
        }

        for(auto x:v)
        {
            for(auto &y:m)
            {
                if(x==y.second)
                {
                    cout<<y.first;
                    m[y.first]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    
}