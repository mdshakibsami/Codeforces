#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin>>n>>m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    long long answer = 0;
    answer += v[0] - 1;
    int x = v[0];
    for (int i = 1; i < m; i++)
    {
        if (x != v[i])
        {
            if (v[i] > x)
            {
                answer += v[i] - x;
                x = v[i];
            }
            else
            {
                answer += ((n - x) + v[i]);
                x = v[i];
            }
        }
        else
        {
            x = v[i];
        }
       
    }
    cout << answer << endl;
}