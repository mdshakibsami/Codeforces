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
        int arr[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        if (n == 2)
            cout << "Yes" << endl;
        else
        {
            int size = s.size();
            if(size==1) cout<<"Yes"<<endl;
            else if(size==2)
            {
                vector<int>v (s.begin(), s.end());
                int count1=0,count2=0;
                for(int i=0;i<n;i++)
                {
                    if(v[0]==arr[i]) count1++;
                    else if(v[1]==arr[i]) count2++;
                }
                if(n%2==0)
                {
                    if(count1==count2) cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                }
                else
                {
                    int newN = n/2;
                    if(count1==newN or count2==newN) cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                }

            }
            else cout<<"No"<<endl;
        }
    }
}