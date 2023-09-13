#include <iostream>
using namespace std;

int divisibleSum(int m, int n) {
  int sum = 0;
  for(int i = 0; i <= m; i++) {
    if(i % n == 0) {
      sum = sum + i;
    }
  }
  return sum;
}
int notDivisibleSum (int m, int n) {
  int sum = 0;
  for(int i = 0; i <= m; i++) {
    if(i % n != 0) {
      sum = sum + i;
    }
  }
  return sum;
}

int main() {
  int n = 6;
  int m = 30;
  int div = divisibleSum(m, n);
  int notDiv = notDivisibleSum(m, n);
  int ans = abs(div - notDiv);
  cout << ans;
  
  return 0;
}