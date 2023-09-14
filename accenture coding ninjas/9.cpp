#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int soln(int m, int n) {
    int sum = 0;
    for(int i = m; i<=n; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            sum = sum + i;
        }
    }
    return sum;
}
 
int main() {
    int m = 12;
    int n = 50;

    int ans = soln(m, n);
    cout << ans;
    
    return 0;
}