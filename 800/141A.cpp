#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string guest,host,s;
    cin>>guest>>host>>s;
    string finalStr=guest+host;
    if(finalStr.size()==s.size())
    {
        bool notFound=false;
        for(int i=0;i<finalStr.size();++i)
        {
            bool found=false;

            for(int j=0;j<s.size();++j)
            {
                if(finalStr[i]==s[j])
                {
                    found= true;
                    s[j]=0;
                    break;
                }
                
            }
            if(found==false) 
            {
                notFound=true;
                break;
            }
        }
        if(notFound) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else cout<<"NO";
    
}