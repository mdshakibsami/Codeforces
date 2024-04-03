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
        char arr[n];
        for (int i = 0; i <n; i++) cin >> arr[i];
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j] && arr[j]!=0)
                {
                    count++;
                    arr[j]=0;
                }
            }
        }
        cout<<((n-count)*2)+count<<endl;
    }
}