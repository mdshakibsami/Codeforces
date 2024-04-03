
/*
Problem link:
https://codeforces.com/problemset/problem/599/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    int x = a+b+c;
    int y=a*2+b*2;
    int z = a*2+c*2;
    int p = b*2+c*2;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    v.push_back(p);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    

}
