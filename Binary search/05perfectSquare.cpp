#include <iostream>
using namespace std;

int squareRoot(int n) {
    int s = 0;
    int e = n;

    int mid = s + (e-s)/2;
    int ans = -1;

    while(s < e) {
        int square = mid * mid;
        if(square == n)
        return mid;
        else if(square < n) {
            s = mid + 1;
            ans = mid;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double preciseSquare(int n, int m, int sqrt) {
    double factor = 1;
    double ans = sqrt;

    for (int i = 0; i < m; i++) {
        factor = factor/10;
        for(double j = ans; j*j < n; j = j+factor) {
            ans = j;
        }
    }
    return ans;
}
 
int main()
{
    int n, m;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the precision: ";
    cin >> m;
    cout << endl;
    int sqrt = squareRoot(n);
    cout << sqrt;
    double preciseSqrt = preciseSquare(n, m, sqrt);
    cout << "Square Root of " << n << "to " << m << "th precision is: " << preciseSqrt << endl;

    return 0;
}