/*
https://codeforces.com/problemset/problem/248/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n*2];
    for(int i=0;i<n*2;++i) cin>>arr[i];
    int lZero=0,lOne=0,rZero=0,rOne=0;
    for(int i=0;i<n*2;i+=2)
    {
        if(arr[i]==0) lZero++;
        else lOne++;
        if(arr[i+1]==0) rZero++;
        else rOne++;
    }
    int  time = min(lZero,lOne)+ min(rZero,rOne);
    cout<<time<<endl;
}