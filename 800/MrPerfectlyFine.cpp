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
        int k = 0, j = 0, min[n], point[n];
        bool flag1 = false, flag10 = false, flag11 = false;
        for (int i = 0; i < n * 2; i++)
        {
            // taking inpun in two arrays
            if (i % 2 == 0)
            {
                cin >> min[j];
                j++;
            }
            else
            {
                cin >> point[k];
                if (point[k] == 1)
                    flag1 = true;
                else if (point[k] == 10)
                    flag10 = true;
                else if (point[k] == 11)
                    flag11 = true;
                k++;
            }
        }

        if (flag10 && flag1 || flag11)
        {
            int min11 = INT_MAX, min1 = INT_MAX, min10 = INT_MAX;
            for (int i = 0; i < j; i++)
            {
                // minimum value
                if (point[i] == 1)
                {
                    if (min[i] <= min1)
                        min1 = min[i];
                }
                if (point[i] == 10)
                {
                    if (min[i] <= min10)
                        min10 = min[i];
                }

                else if (point[i] == 11)
                {
                    if (min[i] <= min11)
                        min11 = min[i];
                }
            }

            //comparing
            int a = min11;
            int b = min1 + min10;
            if (flag10 && flag1 && flag11 == false)
                cout << b << endl;
            else if (flag11 && flag10 && flag1)
            {
                if (a > b)
                    cout << b << endl;
                else
                    cout << a << endl;
            }
            else
                cout << a << endl;
        }
        else
            cout << -1 << endl;
    }
}