#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string str1, str2;
    int flag=1;
    cin >> str1 >> str2;
    for(int i=0;i<str1.size();i++)
    {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]>str2[i])
        {
            cout<<1<<endl;
            flag=0;
            break;
        }
        else if(str1[i]<str2[i])
        {
            cout<<-1<<endl;
            flag=0;
            break;
        }
    }
    if(flag) cout<<0<<endl;
}