/*
https://codeforces.com/problemset/problem/22/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n >= 2)
    {
 
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
       auto Un=unique(v.begin(),v.end());
       v.erase(Un,v.end());
       if(v.size()==1) cout<<"NO"<<endl;
       else cout<<v[1]<<endl;
    }
    else cout<<"NO"<<endl;
}