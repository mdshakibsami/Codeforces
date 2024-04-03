#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i=0,count=0;

        while (true)
        {
            i++;
            if(i%3==0 || i%10==3);
            else 
                count++;
            
            if(count==n) break;
        }
        cout<<i<<endl;
        
    }
}