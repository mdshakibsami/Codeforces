/*
https://codeforces.com/problemset/problem/45/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string>v={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n;
    string s;
    cin>>s>>n;
    int index;
    for(int i=0;i<v.size();++i)
    {
        if(v[i]==s)
        {
            index=i;
            break;
        }
    }
    int month=(index+n)%12;
    cout<<v[month]<<endl;
}