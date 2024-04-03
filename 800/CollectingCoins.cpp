#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        long long n;
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3, greater<int>());
        cin >> n;
        long long x,y;
         x = arr[0] - arr[1];
         y = arr[0] - arr[2];

        n -= (x + y);
        if (n >= 0)
        {
            if (n % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}