/*
Problem link:
https://codeforces.com/contest/1850/problem/B
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>q;
        vector<int>index;
        int i=1,max=INT_MIN;
        while (n--)
        {
            int a,b;
            cin>>a>>b;
            
            if(a<=10)
            {
                if(b>max) max=b;
                q.push_back(b);
                index.push_back(i);
            }
            i++;
        }
        for(int i=0;i<q.size();++i) 
        {
            if(q[i]==max)
            {
                cout<<index[i]<<endl;
            }
        }
        

    }
    
}