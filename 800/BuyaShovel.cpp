#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k,r,i;
   cin>>k>>r;
   for( i=1;;i++)
   {
    int x=(k*i)%10;
    if(x==0 || x==r) break;
        
   }
   cout<<i<<endl;
}