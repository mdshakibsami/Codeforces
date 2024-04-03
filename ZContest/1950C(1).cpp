#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int x = stoi(s);

        if (x < 13)
        {
            if (x == 0)
            {
                cout << 12;
                for (int i = 2; i < s.size(); i++)
                    cout << s[i];
                cout << " "
                     << "AM" << endl;
            }
            else if(x<10)
            {
                cout<<0<<x;
                for (int i = 2; i < s.size(); i++)
                    cout << s[i];
                cout << " "
                     << "AM" << endl;

            }
            else if(x==12)
            {
                cout<<x;
                for (int i = 2; i < s.size(); i++)
                    cout << s[i];
                cout << " "
                     << "PM" << endl;
            }
            else if(x>=10)
            {
                cout<<x;
                for (int i = 2; i < s.size(); i++)
                    cout << s[i];
                cout << " "
                     << "AM" << endl;
            }
        }
        else 
        {
            int y =x-12;
            if(y<10)
            {
                cout<<0<<y;
                for (int i = 2; i < s.size(); i++)
                    cout << s[i];
                cout << " "
                     << "PM" << endl;
            }
            else
            {
                cout<<y;
            for (int i = 2; i < s.size(); i++)
                    cout << s[i];
                cout << " "
                     << "PM" << endl;
            }
        }
    }
}