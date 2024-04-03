#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {

        string str;
        cin >> str;
        if (str == "X++" || str == "++X")
            count++;
        else
            count--;
    }
    cout << count << endl;

    return 0;
}