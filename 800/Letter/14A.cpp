/*
https://codeforces.com/problemset/problem/14/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    char letter[n][m];
    int fRow=51,lRow=-1,fCol=51,lCol=-1;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>letter[i][j];
            if(letter[i][j]=='*')
            {
                if(i<fRow) fRow=i;
                if(i>lRow) lRow=i;
                if(j<fCol) fCol=j;
                if(j>lCol) lCol=j;
            }
        }
    }
    for(int i=fRow;i<=lRow;++i)
    {
        for(int j=fCol;j<=lCol;++j)
        {

        cout<<letter[i][j];
        } 
        
        cout<<endl;
    }
}