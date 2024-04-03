/*
problem link:
https://codeforces.com/problemset/problem/148/A

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int arr[d],damaged=0;
    for(int i=1;i<=d;++i)
    {
        if(i%k==0) damaged++;
        else if(i%l==0) damaged++;
        else if(i%m==0) damaged++;
        else if(i%n==0) damaged++;
    }
    cout<<damaged<<endl;
}
