#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (s.size() == 1)
        cout << 0 << endl;
    else
    {

        long long number = 0, counter = 1;
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i] - '0';
            number += x;
        }
        while (number > 9)
        {
            counter++;
            long long sum = 0;
            string numToString = to_string(number);
            for (int i = 0; i < numToString.size(); i++)
            {
                sum += numToString[i] - '0';
            }
            number = sum;
        }
        cout << counter << endl;
    }
}