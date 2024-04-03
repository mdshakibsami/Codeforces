#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], max = 0,sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i ]> max)
            max = arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int x= max-arr[i];
        sum+=x;
    }
    cout<<sum<<endl;
}