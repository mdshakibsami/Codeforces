
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,year=0;
    cin>>a>>b;
    while (true)
    {
        year++;
        a=a*3;
        b=b*2;
        if(a>b)
        break;
        
    }
    cout<<year<<endl;
    
}