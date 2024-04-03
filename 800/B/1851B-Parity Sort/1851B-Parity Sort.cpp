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
        if (n == 1)
        {
            int x;
            cin>>x;
            cout << "YES" << endl;
        }
        else
        {
            int arr1[n],arr2[n];
            bool firstP=false,lastp=false;
            for (int i = 0; i < n; ++i)
            {
            int x;
            cin>>x;
            arr1[i]=x;
            arr2[i]=x;
            } 
            sort(arr1,arr1+n);
            bool notPossible=false;
            for(int i=0;i<n;++i)
            {
                if(arr1[i]%2==0)
                {
                    if(arr2[i]%2!=0)
                    {
                     notPossible = true;
                        break;
                    }
                }
                else 

                {
                    if(arr2[i]%2==0)
                    {
                        notPossible=true;
                        break;
                    }
                }
            }
            if(notPossible) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
            