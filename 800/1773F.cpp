#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int x=a+b;
    if (n == 1)
    {
        if (a == b)
        {
            cout << 1 << endl;
            cout << a << ':' << b << endl;
        }
        else
        {
            cout << 0<< endl;
            cout << a << ':' << b << endl;
        }
    }
    else if(a==0 && b==0)
    {
        cout<<n<<endl;
        while (n--)  cout<<0<<":"<<0<<endl;
    }
    else if(x==n)
    {
        cout<<0<<endl;
        while (n--)
        {
            if(a>0)
            {
                cout<<1<<":"<<0<<endl;
                a--;
            }
            else  cout<<0<<":"<<1<<endl;

        }
        
    }
    else if(x>n)
    {
        if(a-(n-1)==b)
        {
        cout<<0<<endl;
        int z=n-2;
        while (z--)
        {
            if(a>0)
            {
                cout<<1<<":"<<0<<endl;
                a--;
            }
        
            else 
            {
                cout<<0<<":"<<1<<endl;
                b--;
            }
        }
        if(a>b)
        {
            cout<<0<<":"<<b-(b-1)<<endl;
            b--;
        }
        else 
        {
            cout<<a-(a-1)<<":"<<0<<endl;
            b--;
        }
        cout<<a<<":"<<b<<endl;
        }
        else
        {

        cout<<0<<endl;
        int z=n-1;
        while (z--)
        {
            if(a>0)
            {
                cout<<1<<":"<<0<<endl;
                a--;
            }
        
            else 
            {
                cout<<0<<":"<<1<<endl;
                b--;
            }
        }
        cout<<a<<":"<<b<<endl;
        }


        
    }
    else if(x<n)
    {
        int d=n-x;
        cout<<d<<endl;
        n=n-d;
        while (n--)
        {
            if(a>0)
            {
                cout<<1<<":"<<0<<endl;
                a--;
            }
            else  cout<<0<<":"<<1<<endl;

        
        }
        while (d--) cout<<0<<":"<<0<<endl;
        
        
    }

}