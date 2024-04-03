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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int up=0,down=0,middle=0;
        for(auto x:v)
        {
            if(x==1 || x==3) up++;
            
        }
        cout<<up<<endl;
    }
    
}