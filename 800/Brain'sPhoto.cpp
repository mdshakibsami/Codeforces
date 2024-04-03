#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   char arr[n*m];
   bool color=false,BW=false;
   for(int i=0;i<n*m;i++)
   {
    cin>>arr[i];
    if(arr[i]=='C' ||arr[i]=='M' ||arr[i]=='Y') color=true;//else if(arr[i]=='C' ||arr[i]=='M' ||arr[i]=='Y') BW=true;
   }
   if(color) cout<<"#Color"<<endl;
   else cout<<"#Black&White"<<endl;
   
}
