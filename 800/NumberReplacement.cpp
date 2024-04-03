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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        string str;
        cin >> str;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            char c = str[i];
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    if (str[j] != c)
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
