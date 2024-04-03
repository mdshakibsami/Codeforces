#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min = 200, max = -1, maxI, minI;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    if (arr[1] == max && arr[n] == min)
        cout << 0 << endl;
    else
    {
        int a,b;

        for (int i = 1; i <=n; i++)
        {
            if (arr[i] == max)
            {
                max = i;
                break;
            }
        }
        for (int i = n; i >0; i--)
        {
            if (arr[i] == min)
            {
                min = i;
                break;
            }
         }

         if (min> max)
        {

            a = n - min;
            b = abs(1 - max);
           
        }
        else
        {
            a = n - (min+1);
            b = abs(1 - max);
            
        }
        cout<<a+b<<endl;
    }
}