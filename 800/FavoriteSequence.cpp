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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int l = 0;
        int r = n - 1;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << arr[l] << " ";
                l++;
                count++;
            }
            else
            {
                cout << arr[r] << " ";
                r--;
                count++;
            }
            if (count == n)
                break;
        }
        cout << endl;
    }
}