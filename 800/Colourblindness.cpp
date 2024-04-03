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
        char arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (arr1[i] == 'B')
                arr1[i] = 'G';
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            if (arr2[i] == 'B')
                arr2[i] = 'G';
        }
        bool notMatch=false;
        for (int i = 0; i < n; i++)
        {
           if(arr1[i]!=arr2[i])
           {
                notMatch=true;
                break;
           }
           

        }
        if(notMatch) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
