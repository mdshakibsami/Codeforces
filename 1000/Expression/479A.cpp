/*
https://codeforces.com/problemset/problem/479/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int a,b,c,num;
    cin>>a>>b>>c;
    int x = (a+b)*c;
    int y = a*(b+c);
    int z = a+b+c;
    int s = a*b*c;
    if(x>=y && x>=z && x>=s) cout<<x<<endl;
    else if(y>=x && y>=z && y>=s) cout<<y<<endl;
    else if(s>=x && s>=y && s>=z) cout<<s<<endl;
    else if(z>=x && z>=y && z>=s) cout<< z<<endl;
}
