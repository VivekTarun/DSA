#include <iostream>
using namespace std;

int solveRec(int n, int k) {
    if(n == 1) return k;
    if(n == 2) return (k + k*(k-1));

    int ans = (solveRec(n-2, k) + solveRec(n-1, k))*(k-1);
    return ans;
}
int main() {
    
    int n = 4;
    int k = 3;
    int ans = solveRec(n, k);
    cout << "ans: " << ans << endl;
    
    return 0;
}