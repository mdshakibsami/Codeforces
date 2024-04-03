/*
https://codeforces.com/problemset/problem/474/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
      char indicator;
        cin>>indicator;
        string s,str="qwertyuiopasdfghjkl;zxcvbnm,./";
        cin>>s;
        if(indicator=='R')
        {
            for(int i=0;i<s.size();i++)
            {
                for(int j=0;j<str.size();j++)
                {
                    if(s[i]==str[j])
                    {
                        cout<<str[j-1];
                        break;
                    }
                }
            }
        }
        else 
        {
            for(int i=0;i<s.size();i++)
            {
                for(int j=0;j<str.size();j++)
                {
                    if(s[i]==str[j])
                    {
                        cout<<str[j+1];
                        break;
                    }
                }
            }

        }
    }
