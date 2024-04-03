#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    int arr[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        if (n >= arr[i])
        {

            x += n / arr[i];
            n %= arr[i];
        }
    }
    cout << x << endl;
}