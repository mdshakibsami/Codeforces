#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int x = size(str);
    for(int i=0;i<x;)
    {
        if(str[i]=='-')
        {
            if(str[i+1]=='-')
            {
                cout<<2;
                i+=2;
            }
            else if(str[i+1]=='.')
            {
                cout<<1;
                i+=2;
            }
        }
        if(str[i]=='.')
        {
            cout<<0;
            i++;
        }
    }

}