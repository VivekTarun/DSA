#include <iostream>
using namespace std;
 
int main()
{
    int n=5;
    cout << "Enter the value of n " << endl;
    cin >> n;

    bool isPrime = 1;


    for(int i =2; i<n ; i++){
        if(n%i == 0){
            cout << "Not a prime Number" << endl;
            isPrime = 0;
            break;
        }
        
    }
    if(isPrime == 0){
        cout << n << " Not a prime no.";
    }
    else{
        cout << n << " is a prime no.";
    }

    return 0;
}