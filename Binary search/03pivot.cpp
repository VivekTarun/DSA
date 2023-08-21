#include <iostream>
using namespace std;

int getPivot(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        } 
        mid = s + (e-s)/2;
    }
    return e ;
}
 
int main()
{
    int arr[11] = {10, 11, 12, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << getPivot(arr, 11);
    return 0;
}