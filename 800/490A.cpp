#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    int one = 0, two = 0, three = 0;
    for (int i = 0; i <n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            one++;
        else if (arr[i] == 2)
            two++;
        else if (arr[i] == 3)
            three++;
    }
    if (one && two && three)
    {
        int min;
        if (one <= two && one <= three)
            min = one;
        else if (two <= one && two <= three)
            min = two;
        else
            min = three;
        cout<<min<<endl;
        
        while (min--)
        {
            bool one =true,two=true,three=true;
            for(int i=0;i<n;i++)
            {
                if(one && arr[i]==1)
                {
                    cout<<i+1<<" ";
                    arr[i]=0;
                    one=false;
                }
                else if(two && arr[i]==2)
                {
                    cout<<i+1<<" ";
                    arr[i]=0;
                    two=false;
                }
                else if(three && arr[i]==3)
                {
                    cout<<i+1<<" ";
                    arr[i]=0;
                    three=false;
                }
            }
            cout<<endl;
        }
        
    }
    else
        cout << 0 << endl;
}