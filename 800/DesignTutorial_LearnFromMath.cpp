#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n - 4 << " ";
        cout << 4 << endl;
    }
    else
    {

        cout << 9 << " ";
        cout << n - 9 << endl;
    }
}