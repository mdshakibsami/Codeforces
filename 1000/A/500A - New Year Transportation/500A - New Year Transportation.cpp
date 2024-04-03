#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    int arr[n];
    bool flag =false;
    for(int i=1;i<n;i++) cin>>arr[i];
    for(int i=1;i<=t;i+=arr[i])
    {
        if(i==t) 
        {
            flag = true;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}