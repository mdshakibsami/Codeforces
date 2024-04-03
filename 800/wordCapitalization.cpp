#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    if (str[0] >= 65 && str[0] <= 90)
        cout << str;
    else
    {
        int x = size(str);

        char capitalizeFirst = (char)(str[0] - 32);

        cout << capitalizeFirst;
        for (int i = 1; i < x; i++)
        {
            cout << str[i];
        }
    }

    return 0;
}