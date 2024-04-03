/*
https://codeforces.com/problemset/problem/26/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 3000;
    vector<int> v;
    while (a--)
    {
        if (a % 2 != 0 && a >= 3)
        {
            bool divisible = false;
            for (int i = 2; i < a; ++i)
            {
                if (a % i == 0)
                {
                    divisible = true;
                    break;
                }
            }
            if (divisible == false)
                v.push_back(a);
        }
    }
    v.push_back(2);
    sort(v.begin(), v.end());
    // ________________________________
    vector<int> almostPrime;
    int  n = 3000;
    while (n--)
    {
        int count=0;
        for (int i = 0; i < v.size(); ++i)
        {
            if (n % v[i] == 0)
            {
                count++;
                if (count > 2)
                    break;
            }
        }
        if (count == 2)
            almostPrime.push_back(n);
            
    }
    sort(almostPrime.begin(),almostPrime.end());
    int num;
    cin>>num;
    int apCounter=0;
    for(int i=0;i<almostPrime.size();++i)
    {
        
        if(almostPrime[i]<=num)  apCounter++;
        else break;
    }
    cout<<apCounter<<endl;
}