#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j = 0;
        cin >> n;
        char s[n],s2[n];
        string str = "";
        for (int i = 0; i < n; i++)
            cin >> s[i];
        //remove duplicate those are together
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                s2[j] = s[i];
                j++;
            }
        }
      
      //now check duplicate
        bool found=false;

        for(int i=0;i<j;i++)
        {
            for(int k=i+1;k<j;k++)
            {
                if(s2[i]==s2[k])
                {
                    found=true;
                    break;
                }
            }
        }
        if(found) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
}