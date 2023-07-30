#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}
 
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool prime = checkPrime(n);

    if(prime) {
        cout << n << " is prime no.";
    } else {
        cout << n << " is not a prime no.";
    }
    return 0;
}