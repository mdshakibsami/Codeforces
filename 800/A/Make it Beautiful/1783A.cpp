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

        if (n == 2)
        {
            if (n == 2 && v[0] == v[1])
                cout << "NO" << endl;
            else
            {
                cout << "Yes" << endl;
                cout << v[0] << " " << v[1] << endl;;
            }
        }
        else
        {
            int count=1;
            int firstElement = v[0];
            for (int i = 1; i < n; i++)
            {
                if (firstElement == v[i])
                    count++;
            }

            if (count == n)
                cout << "No" << endl;
            else
            {

                sort(v.begin(), v.end(),greater<int>());
                
                if(v[0]!=v[1])
                {
                    cout<<"Yes"<<endl;
                    for(auto x:v) cout<<x<<" ";
                    cout<<endl;
                }
                else
                {
                int sortedFirstElement = v[0];
                for(int i=1;i<n;i++)
                {
                    if(sortedFirstElement!=v[i])
                    {
                        swap(v[1],v[i]);
                    }
                }
                    cout<<"Yes"<<endl;
                    for(auto x:v) cout<<x<<" ";
                    cout<<endl;

                }
               
            }
        }
    }
}