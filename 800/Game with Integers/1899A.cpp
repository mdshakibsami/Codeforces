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
        int n;
        cin>>n;
        int rem = n%3;
        if(rem==1 || rem ==2) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    
}