#include <iostream>
using namespace std;

bool isPrime(int n){
    int count = 0;
    if(n < 2)
        return false;
    for(int i = 2;i < n/2; i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    return true;
}

int main()
{
    int lower, upper;
    
    lower=1,upper=100;
    
    for(int i = lower; i <= upper; i++)
        if(isPrime(i))
            cout << i << " ";
}
