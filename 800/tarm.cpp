#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,pass=0,max=INT_MIN;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        pass=pass+b-a;
        if(pass>max)
            max=pass;

    }
    cout<<max<<endl;
    
}