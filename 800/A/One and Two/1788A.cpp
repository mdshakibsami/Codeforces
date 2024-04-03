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
        vector<int> v;
        int countTwo = 0, countOne = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x % 2 == 0)
                countTwo++;
            else
                countOne++;
        }
        if (countOne == n)
            cout << 1 << endl;
        else if (countTwo % 2 == 0)
        {
            int count=0,answer;
            int y = countTwo / 2;
            for (int i = 0; i < n; i++)
            {
                if(v[i]%2==0) 
                {
                    count++;
                    answer=i;
                    if(count==y) break;
                }
            }cout<<answer+1<<endl;
        }
        else
            cout << -1 << endl;
    }
}