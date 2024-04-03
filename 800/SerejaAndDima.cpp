#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int f = 0;
    int l = n - 1;
    int j = 0;
    int A = 0, B = 0;
    while (f <= l)
    {
        if (j % 2 == 0)
        {
            if (arr[f] > arr[l])
            {
                A += arr[f];
                f++;
            }
            else
            {
                A += arr[l];
                l--;
            }
        }
        else
        {
            if (arr[f] > arr[l])
            {
                B += arr[f];
                f++;
            }
            else
            {
                B += arr[l];
                l--;
            }
        }
        j++;
    }
    cout<<A<<" "<<B<<endl;
}