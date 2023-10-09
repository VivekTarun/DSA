#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m) {
  int start = 1;
  int end = m;
  long long int ans = -1;
  while(start <= end) {
    long long int mid = start + (end - start)/2;
    long long int element = pow(mid, n);
    if(element == m) {
      ans = mid;
    } else if(element > m) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}

int main() {
  int ans = NthRoot(3, 27);
  cout << ans;
  return 0;
}