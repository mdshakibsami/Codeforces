#include <bits/stdc++.h>
using namespace std;
 

int main()
{
    string s,result="";
    cin>>s;
    //remove douplicate
    int arr[123]={0};
    for(int i=0;i<s.size();i++)
    {
        if(arr[s[i]]==0)
        {
            arr[s[i]]=1;
            result+=s[i];
        }

    }
    if(result.size() % 2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}