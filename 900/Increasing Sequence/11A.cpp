/*
https://codeforces.com/problemset/problem/11/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] >= arr[i + 1])
        {
            int x = arr[i] - arr[i + 1];
            if (x == 0)
            {
                count++;
                arr[i + 1] += d;
            }
            else if (x % d == 0)
            {
                int y = x / d;
                count += y;
                arr[i + 1] += y * d;
            }
            else
            {
                int y = (x / d) + 1;
                count += y;
                arr[i + 1] += y * d;
            }

            if (arr[i] == arr[i + 1])
            {
                count++;
                arr[i + 1] += d;
            }
        }
    }
    cout << count << endl;
}