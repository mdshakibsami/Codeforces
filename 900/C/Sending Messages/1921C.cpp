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
        long long n,charge,a,b,answer=0;
        cin>>n>>charge>>a>>b;
        vector<long long>v,difV;
       
       v.push_back(0);
        for(int i=0;i<n;i++) 
        {
            long long x;
            cin>>x;
            v.push_back(x);
            
        }
        
    
    
        for(int i=0;i<v.size()-1;i++)
        {
            long long  y = abs(v[i]-v[i+1]);
            difV.push_back(y);

        }
        
        for(int i=0;i<difV.size();i++)
        {
            long long  y = difV[i]*a;
            if(y>b) answer+=b;
            else answer+=y;
     
        }
        
        
        answer = charge-answer;
        if(answer>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}