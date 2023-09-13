#include <iostream>
using namespace std;

int oddPosition(int *arr, int n) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    
    for(int i = 0; i < n-1; i++) {
        if(i & 1) { // odd case
            if(arr[i] < secondSmallest) {
                secondSmallest = arr[i];
                if(arr[i] < secondSmallest) {
                    smallest = arr[i];
                }
                return secondSmallest;
            }

        }
    }
}

int evenPosition(int *arr) {

}
 
int main() {
    int arr[6] = {3,2,1,7,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int odd = oddPosition(arr, n);
    int even = evenPosition(arr, n);

    int sum = odd + even;
    cout << sum << endl;
    
    return 0;
}