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
        int n,q;
        cin>>n>>q;
        long long even=0,odd=0,sum=0;
        vector<long long>v(n);
        for(int i=0;i<n;i++) 
        {
            int x;
            cin>>x;
            if(x%2!=0) odd++;
            else even++;
            sum+=x;
            v.push_back(x); 
        }
       
        while (q--)
        {
            
            long long x,y;
            cin>>x>>y;
            if(x==0) 
            {
                sum+=(even*y);
                if(y%2!=0) 
                {
                    odd+=even;
                    even=0;

                }


            cout<<sum<<endl;
            }
            else 
            {
                sum+=(odd*y);
                if(y%2!=0) 
                {
                    even+=odd;
                    odd=0;

                }
                cout<<sum<<endl;
            }
        }
        
    }
    
}