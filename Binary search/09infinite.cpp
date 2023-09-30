#include <iostream>
using namespace std;

int infiniteBS(int *arr, int target) {
    //first find the range
    //first start with the window of size 2.
    int start = 0;
    int end = 1;

    //condition for the target to lie in the range.
    // if the target element is greater than end -> keep doubling it.
    while(target > arr[end]) {
        int newStart = end + 1;
        end = end + (end - start + 1)* 2; 
        start = newStart;
    }
    int mid = start + (end - start)/2;
    while(start <= end) {
        if(target == arr[mid]) return mid;
        else if(target < arr[mid]) end = mid - 1;
        else start = mid + 1;
        mid = start + (end - start)/2;
    }
    return -1;
}
 
int main() {
    
    int arr[] = {2,3,4,5,6,7,8,9,12, 34, 45,56,78,233,445};

    cout << infiniteBS(arr, 45);
    return 0;
} 
 