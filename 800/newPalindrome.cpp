#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {

        string str;
        cin >> str;
        int x = str.size();

        if (x % 2 == 0)
        {
            int diff = 0;
            for (int i = 1; i < x; i++)
            {
                if (str[0] != str[i])
                {
                    diff = 1;
                    break;
                }
            }
            if (diff)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        }
        else
        {
            int diff = 0;
            int y = x / 2;
            for (int i = 0; i < y; i++)
            {

                if (str[i] != str[y + 1])
                {
                    diff = 1;
                    break;
                }
            }
            if (diff)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        }
    }
    return 0;
}