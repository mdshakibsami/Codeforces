#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        int x,y,k,K,q,Q;
        cin>>x>>y>>k>>K>>q>>Q;
        vector<int>king,Queen;
        k+=x; K+=y;
        king.push_back(k);
        king.push_back(K);
        k-=x; K-=y;
        k+=x; K-=y;
        king.push_back(k);
        king.push_back(K);
        k-=x; K+=y;
        k-=x; K-=y;
        king.push_back(k);
        king.push_back(K);
        k+=x; K+=y;
        k-=x; K+=y;
        king.push_back(k);
        king.push_back(K);



        q+=x; Q+=y;
        Queen.push_back(q);
        Queen.push_back(Q);
        q-=x; Q-=y;
        q+=x; Q-=y;
        Queen.push_back(q);
        Queen.push_back(Q);
        q-=x; Q+=y;
        q-=x; Q-=y;
        Queen.push_back(q);
        Queen.push_back(Q);
        q+=x; Q+=y;
        q-=x; Q+=y;
        Queen.push_back(q);
        Queen.push_back(Q);

        int ans =0;
        for(int i=0;i<8;i+=2)
        {
            for(int j=0;j<8;j+=2)
            {
                if(king[i]==Queen[j] && king[i+1] == Queen[j+1]) ans++;
            }
        }
        cout<<ans<<endl;
    }
}