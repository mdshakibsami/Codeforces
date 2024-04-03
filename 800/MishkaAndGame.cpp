#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,mishka=0,chris=0;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) mishka++;
        else if(b>a) chris++;

    }
   
    if(mishka>chris) cout<<"Mishka"<<endl;
    else if(mishka==chris) cout<<"Friendship is magic!^^"<<endl;
    else cout<<"Chris"<<endl;
    
}