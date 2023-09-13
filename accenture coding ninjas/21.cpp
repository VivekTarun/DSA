#include <iostream>
using namespace std;

int secondLargest(int *arr, int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    } 
    for(int i = 0; i < n; i++) {
        if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
 
int main() {
    
    return 0;
}