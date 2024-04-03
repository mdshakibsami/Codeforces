/*
https://codeforces.com/problemset/problem/34/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int index = 1;
    int min = abs(arr[0] - arr[n - 1]);
    bool inMin = false;
    for (int i = 1; i < n; ++i)
    {

        int x = abs(arr[i] - arr[i - 1]);
        if (x < min)
        {
            min = x;
            index = i;
            inMin = true;
        }
    }
   if (inMin)
    {
        cout << index << " " << index + 1 << endl;
   }
    else
        cout << 1 << " " << n;
}