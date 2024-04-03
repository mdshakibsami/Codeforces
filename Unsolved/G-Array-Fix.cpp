#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), temp;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        //====================================
        temp = v;
        sort(temp.begin(), temp.end());
        if (temp == v)
            cout << "YES" << endl;
        else
        {

            vector<int> newVector, sortedV;
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (v[i] >= 10)
                {
                    // for(auto x:v) cout<<x<<" ";
                    // cout<<endl;
                    int x,y;
                    x = v[i]%10;
                    v[i]/=10;
                    y = v[i]%10;

                    v.erase(v.begin()+i);
                    v.insert(v.begin()+i,x);
                    v.insert(v.begin()+i,y);
                    // for(auto x:v) cout<<x<<" ";
                    // cout<<endl;
                    

                    
                    sortedV = v;
                    sort(sortedV.begin(), sortedV.end());
                    if (sortedV == v)
                    {
                        // for(auto x :sortedV) cout<<x<<" ";
                        // cout<<endl;
                        // for(auto x :newVector) cout<<x<<" ";
                        // cout<<endl;
                        cout << "YES" << endl;
                        flag = false;
                        break;
                    }
                }
            }

            if (flag)
                cout << "NO" << endl;
        }
    }
}