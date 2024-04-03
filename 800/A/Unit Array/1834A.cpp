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
        int n,oneN=0,oneP=0,move=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>0) oneP++;
            else oneN++;
            v.push_back(x);

        }
        while (oneN>=0)
        {
            if(oneN%2==0 && oneP>=oneN) 
            {
                cout<<move<<endl;
                break;
            }
            else
            {
                oneN--;
                oneP++;
                move++;
            }
        }
        
    }
    
    
}