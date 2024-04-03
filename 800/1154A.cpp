#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[4], max = INT_MIN, index;
    for (int i = 0; i < 4; ++i)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    arr[index]=0;
    for (int i = 0; i < 4; ++i)
    {
        if(arr[i]!=0)
        {
            cout<<max-arr[i]<<" ";
        }
    }
}