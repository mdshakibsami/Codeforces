#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][3], count = 0;
    for (int i = 0; i < n; i++)
    {
        int count1 = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                count1++;

                if (count1 == 2)
                {
                    count++;
                    count1 = 0;
                }
            }
        }
    }
    cout << count << endl;
}