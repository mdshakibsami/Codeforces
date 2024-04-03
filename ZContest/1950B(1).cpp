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
        n=n*2;

        bool ch =true,cd=false;
        int cCh = 0,cCd=0;

        for(int i=0;i<n;i++)
        {
            if(ch)
            {
                cCh++;
            

            //==============
            bool rh =true,rd;
            int crh = 0,crd=0;
            for(int j=0;j<n;j++)
            {
                if(rh)
                {
                    cout<<"#";
                    crh++;

                }
                else if(rd)
                {
                    cout<<".";
                    crd++;
                }
                if(crh==2)
                {
                    crh=0;
                    rd = true;
                    rh = false;
                }
                if(crd==2)
                {
                    crd =0;
                    rd = false;
                    rh =true;
                }

            }
            cout<<endl;
            //===================
            }
            if(cd)
            {
                cCd++;

                //==============
            bool rh =true,rd;
            int crh = 0,crd=0;
            for(int j=0;j<n;j++)
            {
                if(rh)
                {
                    cout<<".";
                    crh++;

                }
                else if(rd)
                {
                    cout<<"#";
                    crd++;
                }
                if(crh==2)
                {
                    crh=0;
                    rd = true;
                    rh = false;
                }
                if(crd==2)
                {
                    crd =0;
                    rd = false;
                    rh =true;
                }

            }
            cout<<endl;
            //===================
            }

            if(cCh==2)
            {
                
                cCh =0;
                ch = false;
                cd= true;
            }
            if(cCd==2)
            {
               
                cCd=0;
                cd = false;
                ch = true;
            }
        }
    }
    
}