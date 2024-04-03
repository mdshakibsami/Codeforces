#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[4],i;
    while (true)
    {
        /* code */
        bool flag = false;
        n = n + 1;
        int temp = n;
        for (int i = 0; i < 4; i++)
        {
            int x = temp % 10;
            arr[i] = x;
            temp /= 10;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (arr[i] == arr[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }

       if(flag);
       else break;
    }
cout<<n;
    
}