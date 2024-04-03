#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool hard=false;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            hard=true;
    }
    if(hard) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}
