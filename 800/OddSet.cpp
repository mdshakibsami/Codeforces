#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2 * n],even=0,odd=0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }
        if(even==odd) cout<<"yes"<<endl;
        else cout<<"NO"<<endl;
    }
}