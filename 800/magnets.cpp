#include <bits/stdc++.h>
using namespace std;
//it takes too much time to solve
int main()
{
    int n, count10 = 1, count01 = 1, group = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 10)
        {

            count01 = 0;
            if (count10 == 0)
            {

                group++;
                count10 = 1;
            }
        }
        else
        {

            count10 = 0;
            if (count01 == 0)
            {

                group++;
                count01 = 1;
            }
        }
    }
    cout << group+1<< endl;
}