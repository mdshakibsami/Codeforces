#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v;
    int min=INT_MAX;
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        x=abs(x);
        v.push_back(x);
        if(min>x) min =x;
    }
    cout<<min<<endl;
}