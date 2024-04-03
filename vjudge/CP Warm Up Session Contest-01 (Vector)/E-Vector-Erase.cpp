#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int a;
    cin>>a;
    v.erase(v.begin()+(a-1));
    int b,c;
    cin>>b>>c;
    v.erase(v.begin()+(b-1),v.begin()+(c-1));
   cout<<v.size()<<endl;
   for(auto x: v) cout<<x<<" ";
}