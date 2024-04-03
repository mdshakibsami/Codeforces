#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        string str1, str2;
        cin >> str1 >> str2;
        for (int i = 0; i < size(str1); i++)
        {
            if (str1[i] == 'M')
            {
                x = 2;
            }
            else if (str1[i] == 'L')
            {
                x = 3 + (size(str1) - 1);
            }
            else if (str1[i] == 'S')
            {
                x = 1 - (size(str1) - 1);
            }
        }
        for (int i = 0; i < size(str2); i++)
        {
            if (str2[i] == 'M')
            {
                y = 2;
            }
            else if (str2[i] == 'L')
            {
                y = 3 + (size(str2) - 1);
            }
            else if (str2[i] == 'S')
            {
                y = 1 - (size(str2) - 1);
            }
        }
        if (x > y)
            cout<<'>'<<endl;
        else if(x==y)
            cout<<'='<<endl;
        else
            cout<<'<'<<endl;
    }

    return 0;
}