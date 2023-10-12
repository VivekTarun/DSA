#include <iostream>
using namespace std;
double myPow(double x, int n) {
    if(n == 0) {
        return 1;
    }

    double ans = myPow(x, n-1);
    double power = ans * x;
    return power;
}
 
int main() {
    
    cout << myPow(2, 4) << endl;
    return 0;
}