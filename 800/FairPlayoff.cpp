#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    int player1,player2;
    int arr[4];
    for(int i=0;i<4;i++) cin>>arr[i];
    if(arr[0]>arr[1])player1=arr[0];
    else player1 =arr[1];
    if(arr[2]>arr[3])player2=arr[2];
    else player2=arr[3];
    
    sort(arr,arr+4,greater<int>());
    

    bool found1=0,found2=0;
    for(int i =0;i<2;i++)
    {

        if(arr[i]==player1) found1=true;
        if(arr[i]==player2) found2=true;
    }
    if(found1 && found2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
   
}
