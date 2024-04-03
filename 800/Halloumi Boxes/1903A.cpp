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
        int boxes,max_subarray;
        cin>>boxes>>max_subarray;
        int boxes_number[boxes];

        for(int i=0;i<boxes;i++){
            int x;
            cin>>x;
            boxes_number[i]=x;
        }

        bool flag = false;
        for(int i=0;i<boxes-1;i++){
            if(boxes_number[i]>boxes_number[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            if(max_subarray==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
    }
}