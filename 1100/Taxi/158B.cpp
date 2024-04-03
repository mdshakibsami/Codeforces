/*
https://codeforces.com/problemset/problem/158/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++)
    {
     int x;
     cin>>x;
     if(x==1) one++;
     else if(x==2) two++;
     else if(x==3 ) three++;
     else four++;
    }
    int group=four; 
    if(three>=one)
    {
        group+=one;
        three-=one;
        group+=two/2;
        two%=2;
        group+=two+three;
        cout<<group<<endl;
    }
    else 
    {
       group+=three;
        one-=three;
        group+=two/2;
        two%=2;
        two=(two*2)+one;
        if(two%4==0) group+=two/4;
        else group+=(two/4)+1;
        cout<<group<<endl;
    }
}