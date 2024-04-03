#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        string str;
        cin >> str;
        int strSize = size(str);
        if (strSize > 10)
        {
            cout<<str[0]<<strSize-2<<str[strSize-1]<<endl;
        }
        else
            cout<<str<<endl;
    }
    return 0;
}