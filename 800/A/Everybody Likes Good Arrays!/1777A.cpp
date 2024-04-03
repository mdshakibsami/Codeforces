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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        if(v[n-1]%2==0) v.push_back(1);
        else v.push_back(2);


        int evenCount = 0, oddCount = 0, answer = 0;
        for(auto x:v)
        {

            if (x % 2 == 0)
            {
                evenCount++;
                if (oddCount > 1)
                {
                    oddCount--;
                    answer += oddCount;
                    oddCount = 0;
                }
                else
                    oddCount = 0;
            }
            else
            {
                oddCount++;
                if (evenCount > 1)
                {
                    evenCount--;
                    answer += evenCount;
                    evenCount = 0;
                }
                else
                    evenCount = 0;
            }
        }
        cout << answer << endl;
    }
}