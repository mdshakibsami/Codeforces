#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i = 1, count = 0;
    while (i<= n / 2)
    {
        int m=n-i;
        if (m % i == 0)
            count++;
        i++;
    }
    cout << count << endl;
}
