#include <iostream>
using namespace std;

int ceiling(int *arr, int n, int key) {
    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    while(start <= end) {
        if(key == arr[mid]) return arr[mid];
        else if(key > arr[mid]) start = mid + 1;
        else end = mid - 1;
        mid = start + (end - start)/2;
    }
    return arr[start];
}
 
int main() {
    
    int arr[7] = {2, 3, 5, 9, 14, 16, 18};
    cout << ceiling(arr, 7, 10);
    return 0;
}