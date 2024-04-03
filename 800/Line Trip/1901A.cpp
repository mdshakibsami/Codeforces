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
        int number_of_gas_station,last_point;
        cin>>number_of_gas_station>>last_point;
        int gas_station_point[number_of_gas_station];

        int max=0;
        gas_station_point[0]=0;
        for(int i=1;i<=number_of_gas_station;i++)
        {
            int x;
            cin>>x;
            gas_station_point[i]=x;
            
        }
        
        for(int i=0;i<number_of_gas_station;i++)
        {
            int y = gas_station_point[i+1]-gas_station_point[i];
            if(y>max) max = y;
            
        }
        int last_point_distance = last_point-gas_station_point[number_of_gas_station];

        if((last_point_distance*2)>max) cout<<last_point_distance*2<<endl;
        else cout<<max<<endl;

    }
    
    
}