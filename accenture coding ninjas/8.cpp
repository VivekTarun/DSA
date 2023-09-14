#include <iostream>
using namespace std;

int calc(int a, int b, int c) {
    int ans;
    if(c == 1) ans = a+b;
    else if(c == 2) ans = a-b;
    else if(c == 3) ans = a*b;
    else if(c == 4) ans = a/b;
    return ans;
}
int main() {
    
    int a = 12;
    int b = 16;
    int c = 1;

    int ans = calc(a, b, c);
    cout << ans << endl;

    return 0;
}