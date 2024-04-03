#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    vector<char>v;
    for (int i = 1; i < s.size() - 1; ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z') v.push_back(s[i]);
        
    }
    sort(v.begin(),v.end());
    auto finalV =unique(v.begin(),v.end());
    v.erase(finalV,v.end());
    cout<<v.size()<<endl;
}