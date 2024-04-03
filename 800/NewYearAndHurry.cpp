#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k, t = 0, problem;
    cin >> n >> k;
    int totalT = 240, tLeft = 240 - k;

    for (int i = 1; i <= n; i++)
    {
        problem = i;
        t += (5 * i);

        if (t > tLeft)
        {
            problem--;
            break;
        }
    }
    cout << problem << endl;
}