#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            arr[i][j] = '.';
    }
    bool hash=true;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < m; j++)
        {
            if (i % 2 != 0)
            {
                if(hash==true)
                {
                    hash=false;
                    arr[i][m-1]='#';
                    break;
                }
                else if(hash==false)
                {
                    hash=true;
                    arr[i][0]='#';
                    break;
                }

            }
            else arr[i][j]='#';
        }
    
    }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout<<arr[i][j];
        
        cout<<endl;
    }
}