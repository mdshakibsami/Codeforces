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
        string s,temp;
        cin >> s;
        if ("abc"== s)
            cout << "YES" << endl;
        else
        {
            temp = s;
            swap(temp[0], temp[1]);
       
            if (temp =="abc")
                cout << "YES" << endl;
            else
            {
                temp = s;
                swap(temp[0], temp[2]);
                
                if ("abc"== temp)
                    cout << "YES" << endl;
                else
                {
                    temp = s;
                    swap(temp[1], temp[2]);
                  
                    if ("abc"== temp)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
            }
        }
    }
}