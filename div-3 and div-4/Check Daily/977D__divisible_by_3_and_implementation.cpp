/https://codeforces.com/contest/977/problem/D
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n; cin>>n;
    // count of factor of 3 , the number
    set<pair<int,int>>st;
    while (n--)
    {
        int x; cin>>x;
        int temp = x;
        int count = 0;
        while (temp%3==0)
        {
            temp/=3;
            count++;
        }

        st.insert({-count,x});
        
    }

    for(auto y:st)  cout<<y.second<<" ";
    
}