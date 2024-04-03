#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    char arr[n][m],answer[n][m]={0};
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            arr[i][j] = x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        map<char, int> mp;
        for (int j = 0; j < m; j++)
        {
            mp[arr[i][j]]++;
            if (mp[arr[i][j]] > 1)
            {
                char c= arr[i][j];
                
                    for (int b= 0; b < m; b++)
                    {
                        if(c==arr[i][b])
                        {
                            answer[i][b]='5';
                        }
                    }
                
            }

            // cout<<arr[i][j]<<" "<<mp[arr[i][j]]<<endl;
        }
        mp.clear();
        for (int j = 0; j < m; j++)
        {
            mp[arr[j][i]]++;

             if (mp[arr[j][i]] > 1)
            {
                char c= arr[j][i];
                  for (int b= 0; b < m; b++)
                    {
                        if(c==arr[i][b])
                        {
                            answer[i][b]='5';
                        }
                    }
                
            }
            // cerr<<arr[j][i]<<" "<<mp[arr[j][i]]<<endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        
                cout << answer[i][j] << " ";
        }
        cout<<endl;
    }
}