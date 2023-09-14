#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int productSmallPair(int arr[], int sum, int n) {
    sort(arr, arr+n);

    int firstTwoSum = arr[0] + arr[1];
    if(firstTwoSum < sum)
    return arr[0]* arr[1];
    else if(n<2 || n == 0)
    return -1;
}
 
int main() {
    
    int arr[7] = {5,4,2,3,9,1,7};
    int sum = 4;

      
    return 0;
}