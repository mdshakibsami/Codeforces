#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int laptop[n], quality[n], max = INT_MIN, qIndex;
    int j = 0, k = 0;

    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            cin >> laptop[j];
            j++;
        }
        else
        {

            cin >> quality[k];
            if (quality[k] > max)
            {
                max = quality[k];
                qIndex = k;
            }
            k++;
        }
    }
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (i == qIndex)
            continue;
        else
        {

            if (laptop[qIndex] <=laptop[i])
            {
                found = true;
                break;
            }
       }
    }
    if (found)
        cout << "Happy Alex" << endl;
    else
    {
        bool small;
        for(int i=0;i<n;i++)
        {
            small=false;
            if(laptop[qIndex]>=laptop[i])
            {
                small=true;
            }
            if(small==false) break;
        }
        if(small) cout << "Happy Alex" << endl;
        else cout << "Poor Alex" << endl;
    }
}
