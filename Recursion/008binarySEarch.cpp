#include <iostream>
using namespace std;

void print(int arr[], int s, int e) {
    for(int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
bool binarySearch(int *arr, int s, int e, int k) {
    cout << endl;
    print(arr, s, e);
    //base case

    // element not found
    if(s>e) {
        return false;
    }

    //element found
    cout << "[s:" << s << " e:" << e << "] ";
    int mid = s + (e-s)/2;
    cout << "Value of mid is " << arr[mid] << endl;
    if(arr[mid] == k) {
        return true;
    }


    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    } else {
        return binarySearch(arr, s, mid-1, k);
    }
} 

int main()
{
    int arr[6] = {2,4,6,10,14,16};
    int size = sizeof(arr)/sizeof(int) - 1;
    int key = 8;

   int ans = binarySearch(arr, 0, size, key);


    cout << key << " present or not --> ";
    if(ans) {
        cout << "present";
    } else {
        cout << "Not Present";
    }
    return 0;
}

