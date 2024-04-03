#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[4];
    for(int i=0;i<4;++i) cin>>arr[i];
    string s;
    cin>>s;
    int cal=0;
    for(int i=0;i<s.size();++i)
    {
        int x=s[i]-'0';
        if(x==1) cal+=arr[0];
        else if(x==2) cal+=arr[1];
        else if(x==3) cal+=arr[2];
        else if(x==4) cal+=arr[3];

    }
    cout<<cal<<endl;
    
}