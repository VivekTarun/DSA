#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<= e) {
        if(arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if(key > arr[mid]) { 
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int firstOcc(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<= e) {
        if(arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if(key > arr[mid]) { 
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s)/2; 
    }
    return ans;
}
 
int main()
{
    int even[5] = {1,2,3,3,3};
    cout << "First Occurence of 3 is at Index " << firstOcc(even, 5, 3);
    cout << endl;
    cout << "Last Occurence of 3 is at Index " << lastOcc(even, 5, 3);
    cout << endl;
    int first = firstOcc(even, 5, 3);
    int last = lastOcc(even, 5, 3);
    int totalNum = (last - first) + 1;

    cout << "Total no. of 3 is " << totalNum;

    return 0;
}