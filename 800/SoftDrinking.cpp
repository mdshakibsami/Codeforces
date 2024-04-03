#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,l,c,d,p,nl,np,min;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   l=(k*l)/nl;
   c=c*d;
   p=p/np;
   if(l<=p && l<=c) min=l;
   else if(p<=l && p<=c) min=p;
   else  min=c;
   cout<<min/n<<endl;
}