/*
https://codeforces.com/problemset/problem/1/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, countN = 0, countM = 0;
    cin >> n >> m >> a;
    if (n > a)
    {
        if(n%a==0)  countN=n/a;
        else countN =(n/a)+1;
    }
    else countN = 1;
    
    if (m > a)
    {
       if(m%a==0)  countM=m/a;
        else countM =(m/a)+1;
    }
    else countM = 1;
    
    cout << countN*countM << endl;
}