#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int ans = n;
        int left =0,right=n-1;

        while (left<right && s[left]!=s[right])
        {
            left++;
            right--;
            ans-=2;
        }
        cout<<ans<<endl;
        
    }
}