#include <bits/stdc++.h>
using namespace std;
/*you don't need to match exactly testcase if your condition is fulfilled,
cause sometimes one problem can have multiple answer*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = n; i >= 1; i--)
        {
            arr[i] = i;
        }
        if(n==3)
            cout<<-1<<endl;
         else if(n%2==0)
        {
            
            for(int i=n;i>=1;i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=n;i>(n/2)+1;i--)
                cout<<arr[i]<<" ";
            for(int i=1;i<=(n/2)+1;i++)
                cout<<arr[i]<<" ";
            
            cout<<endl;
        }
    }

    return 0;
}