#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        char c=s[0];
        for(int i=0;i<n;i++)
        {
            if(c<s[i] ) c=s[i];
        }
        cout<<(c-'a')+1<<endl;
        
    }
    
}
