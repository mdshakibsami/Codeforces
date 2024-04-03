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

        if((n&1)) cout<<"NO"<<endl;
        else 
        {
            int f=0,s=0;
            bool a= true,b = false;
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(a)
                {
                    cout<<"A";
                    f++;
                    if(f==2)
                    {
                        b = true;
                        a = false;
                        s=0;
                    }

                }
                else if(b)
                {
                    cout<<"B";
                    s++;
                    if(s==2)
                    {
                        a = true;
                        b = false;
                        f=0;
                    }

                }
            }
            cout<<endl;
        }
    }
    
}