#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,dollar=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        dollar+=i*k;
    }
    
    if(dollar>n)
        cout<<dollar-n<<endl;
    else cout<<0<<endl;
}