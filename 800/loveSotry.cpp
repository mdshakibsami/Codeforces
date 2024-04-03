#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2 = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {

        cin >> str1;
        int count = 0;

        for (int i = 0; i < 10; i++)
        {
        if(str1[i]!=str2[i])
            count++;
        }
        cout << count << endl;
    }

    return 0;
}