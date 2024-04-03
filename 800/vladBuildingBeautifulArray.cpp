#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min = INT_MAX;
        cin >> n;
        int arr[n];
        bool even = false, odd = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)

                even = true;
            else
                odd = true;

            if (arr[i] < min)
                min = arr[i];
        }
        if (even && odd)
        {
            if (min % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}