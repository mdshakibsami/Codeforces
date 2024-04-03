#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<b) {
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
}
int main()
{
    solve();
    return 0;

}