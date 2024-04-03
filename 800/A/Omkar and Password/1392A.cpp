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
        set<long long>s;
        for(int i=0;i<n;i++) 
        {
            long long x;
            cin>>x;
            s.insert(x);
        }

        if(s.size()==1) cout<<n<<endl;
        else if(s.size()>=1) cout<<1<<endl;
    }
    
    
}
