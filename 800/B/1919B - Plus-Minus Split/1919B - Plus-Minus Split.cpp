#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long answer =0;
        for(long long i=0;i<n;i++)
        {
            if(s[i]=='-') answer--;
            else answer++;
        }
        cout<<abs(answer)<<endl;
    }
    
    
}