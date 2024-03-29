#include <iostream>
#include <vector>
using namespace std;
// recursion + memoization.
int fib(int n, vector<int> &dp) {
    //base case
    if(n <= 1)
    return n;

    if(dp[n] != -1)
    return dp[n];

    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    return dp[n];
}
 
int main()
{
    int n;
    cin >> n;

    vector<int> dpArray(n+1, -1);

    cout << fib(n, dpArray) << endl;

    return 0;
}
