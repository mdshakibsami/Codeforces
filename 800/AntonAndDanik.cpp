#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,anton=0,danik=0;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        if(str[i]=='A') anton++;
        else danik++;
    }
    if(anton>danik) cout<<"Anton"<<endl;
    else if(anton==danik) cout<<"Friendship"<<endl;
    else cout<<"Danik"<<endl;
}