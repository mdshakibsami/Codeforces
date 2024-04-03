#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 5; i > 0; i--)
    {

        x += n / i;
        n = n % i;
    }
    cout << x;
}