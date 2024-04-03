#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        long long num[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];

        } 
        long long max=LONG_LONG_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                if((num[i]*num[j])>max)
                    max=num[i]*num[j];
            }
        }
        cout<<max<<endl;
    }

    return 0;
}