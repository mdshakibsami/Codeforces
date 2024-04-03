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

        int answer=0;

        for(int i=0;i<n-1;i++)
        {
            if(v[i]%2==0 && v[i+1]%2==0  ||v[i]%2!=0 && v[i+1]%2!=0 ) answer++;
        }
        cout<<answer<<endl;

    }
}