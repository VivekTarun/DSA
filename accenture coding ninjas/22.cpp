#include <iostream>
using namespace std;

int noOfCoin(int n) {
    int coin = 0;
    for(int i = 0; i <= n; i++) {
        coin = coin + i*i;
    }
    return coin;
}
 
int main() {
    
    
    return 0;
}