#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool diff = false;
        int  x = str.size();

        for (int i = 0; i < x; i++)
        {
            if (str[0] != str[i])
                diff = true;
        }
        if (diff)
        {
            cout<<x-1<<endl;
        }
        else
        {
            cout<<-1<<endl;

        }
    
    }

    return 0;
}