#include <iostream>
using namespace std;


int oddPosition(int *arr, int n) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(i & 1) { // odd case
            if(arr[i] < smallest) {
                smallest = arr[i];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(i & 1) {
            if(arr[i] < secondSmallest && arr[i] > smallest) {
                secondSmallest = arr[i];
            }
        }
    }
    return secondSmallest;
}

int evenPosition(int *arr, int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(!(i & 1)) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if((i & 1) == 0) {
            if(arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i];
            }
        }
    }
    return secondLargest;
}
 
int main() {
    int arr[6] = {3,2,1,7,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int odd = oddPosition(arr, n);
    int even = evenPosition(arr, n);
    cout << odd << " " << even << endl;
    int sum = odd + even;
    cout << sum << endl;
    
    return 0;
}