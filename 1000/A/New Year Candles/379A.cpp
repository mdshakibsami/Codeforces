#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    int hour=a;
    while(a>=b)
    {
        a=a-b;
        a++;
        hour++;
    }
    cout<<hour<<endl;
}