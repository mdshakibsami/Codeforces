#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int n = size(str);
        cout<<n;
        char arr[n];

        for(int i=0;i<=n;i++)
        {
            arr[i]=str[n-i];
        }
        for(int i=0;i<=n;i++)
        {
            cout<<arr[i];
        }
    }

    return 0;
}