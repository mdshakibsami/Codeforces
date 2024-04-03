/*
https://codeforces.com/problemset/problem/255/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int flag=0,chest=0,biceps=0,back=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(flag==0)
        {
            chest+=x;
            flag=1;
        }
        else if(flag==1)
        {
            biceps+=x;
            flag=2;
        }
        else if(flag==2)
        {
            back+=x;
            flag=0;
        }
    }
    if(chest>=biceps && chest>=back) cout<<"chest"<<endl;
    else if(biceps>=chest && biceps>=back) cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
    
}