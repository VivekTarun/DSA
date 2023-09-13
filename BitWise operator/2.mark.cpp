#include <iostream>
using namespace std;

int getMask(int n, int i) {
    int mask = 1 << i;
    int ans = n & mask;
    if(ans == 0) return 0;
    else return 1;
}

void setBit(int n, int i) {
    int mask = 1 << i;
    int ans = n | mask;
    cout << "After setting: " << ans << endl;

}

void clearBit(int n, int i) {
    int mask = ~(1 << i);
    int ans = n & mask;
    cout << "After clearing " << ans << endl;
}

int main() {
    setBit(10, 2);
    clearBit(10, 1);
    return 0;
}