#include <iostream>
using namespace std;

bool isprime(int n) {

    if(n<=1) {
        return false; 
    }
    
    for(int i =2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}
 
int main()
{
    int n;
    cin >> n;

    if(isprime(n)) {
        cout << "It is a prime no." << endl;
    }else {
        cout << "It is not a prime no." << endl;
    }
    return 0;
}