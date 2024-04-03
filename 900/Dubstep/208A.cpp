/*
https://codeforces.com/problemset/problem/208/A

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size();)
    {
        bool wub = false;
        if (s[i] == 'W')
        {
            if (s[i + 1] == 'U')
            {
                if (s[i + 2] == 'B')
                {
                    v.push_back('0');
                    i += 3;
                    wub = true;
                }
            }
        }
        if (wub)
            ;
        else
        {

            v.push_back(s[i]);
            i++;
        }
    }
    
    for (int i = 0; i < v.size(); ++i)
    {
        if(v[i]=='0')
        {
            if(v[i+1]=='0')
            {
                 v.erase(v.begin()+i);
                 i--;
            }
        }
    }
    
    if(v[0]=='0') v.erase(v.begin());
    for(int i=0;i<v.size();++i) 
    {
        if(v[i]=='0') cout<<" ";
        else cout<<v[i];
    }
}