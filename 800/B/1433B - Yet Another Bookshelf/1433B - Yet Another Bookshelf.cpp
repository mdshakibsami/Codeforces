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
        int n,answer=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int left=0,right=n-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                left=i;
                break;
            }
        }
          for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                right=i;
                break;
            }
        }

          for(int i=left;i<=right;i++)
        {
            if(v[i]==0)
            {
                answer++;
            }
        }

        cout<<answer<<endl;
    }
    
}