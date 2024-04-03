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
        string s;
        cin>>s;
        int answer=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e' || s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' )
            {
                answer++;
                i+=2;
            }
           
        }
        cout<<answer<<endl;
    }
    
}