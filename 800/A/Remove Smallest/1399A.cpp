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
        sort(arr, arr + n);

        bool notPossible = false;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n)
                if (arr[i + 1] - arr[i] == 1 || arr[i + 1] - arr[i] == 0)
                    ;
                else
                {
                    notPossible = true;
                    break;
                }
        }
        if (notPossible)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}