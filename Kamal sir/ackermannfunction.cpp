#include <iostream>
using namespace std;

int ack(int m, int n) 
{ 
    if (m == 0) 
    { 
        return n + 1; 
    } 
    else if ((m > 0) && (n == 0)) 
    { 
        return ack(m - 1, 1); 
    } 
    else if ((m > 0) && (n > 0)) 
    { 
        return ack(m - 1, ack(m, n - 1)); 
    } 

    // Default return statement (added to resolve the warning)
    return -1; // You can choose any value here, or throw an exception if it's more appropriate
} 

int main() 
{ 
    int A; 
    A = ack(1, 2); 
    cout <<"Answe is "<< A << endl; 
    return 0; 
}
