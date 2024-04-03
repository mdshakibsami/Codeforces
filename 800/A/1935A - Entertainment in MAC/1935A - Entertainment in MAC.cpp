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
        int n;
        cin >> n;
        string s, rev, revAdd;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            rev += s[i];
        }
        revAdd = rev + s;

        // comparing two string which is lexicographically smallest?

        if (s.compare(revAdd) < 0)
            cout << s << endl;
        else
            cout << revAdd << endl;
    }
}