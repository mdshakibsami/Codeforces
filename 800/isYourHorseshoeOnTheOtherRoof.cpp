#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    int count=0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > 0)

        {

            for (int j = i + 1; j < 4; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = 0;
                }
            }
        }
    }
    cout<<count<<endl;
}
