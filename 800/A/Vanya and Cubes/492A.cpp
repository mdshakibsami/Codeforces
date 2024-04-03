#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int s = 0, sum = 0, i = 1, count = 0;
    while (sum < n)
    {
        s += i;
        i++;
        sum = sum + s + i;

        count++;
    }
    cout << count << endl;
}