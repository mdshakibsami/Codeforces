/*
https://codeforces.com/problemset/problem/1702/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int x = s.length()-1;
        x = pow(10,x);
       
        int n = stoi(s);
        cout<<n-x<<endl;
    }
    
    
}