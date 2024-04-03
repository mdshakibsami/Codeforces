#include <bits/stdc++.h>
using namespace std;


int main()
{
    //============ Sieve of Eratosthenes for prime numbers =============
    long long N=1000000;
    long long arr[N]={0};
    for(long long i=2;i<=N;i++)
    {
        if(arr[i]==0)
        {
            for(long long j=i*i;j<=N;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    //==================================================
    int n;
    cin>>n;
    long long sq,a;
    while (n--)
    {
        cin>>a;
        sq = sqrt(a);
        if(a==1) cout<<"NO"<<endl;
        else if(sq*sq==a && arr[sq]==0) cout<<"YES"<<endl;
    
        else cout<<"NO"<<endl;
    }
    
    
    
}