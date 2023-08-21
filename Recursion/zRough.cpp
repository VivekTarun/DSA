// #include <iostream>
// using namespace std;

// bool isSorted(int *arr, int n) {
//     if(n == 0 || n == 1) {
//         return true;
//     }
//     if(arr[0] > arr[1]) {
//         return false;
//     } else {
//         int ans = isSorted(arr+1, n-1);
//         return ans;
//     }
    
// }
 
// int main()
// {
//     int arr[] = {1,2,7,4,5};
//     int n = 5;
//     if(isSorted(arr, n)) {
//         cout << "Array is sorted" << endl;
//     } else {
//         cout << "Array is not sorted" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sumArray(int *arr, int n) {
//     if(n == 0)
//     return 0;

//     if(n == 1)
//     return arr[0];

//     int totalSum = arr[0] + sumArray(arr+1, n-1);
//     return totalSum;
// }

// bool linearSearch(int *arr, int n, int k) {
//     if(n == 0)
//     return false;

//     if(arr[0] == k)
//     return true;

//     return linearSearch(arr+1, n-1, k);
// }

// bool binarySearch(int *arr, int s, int e, int k) {
//     if(s > e)
//     return false;

//     int mid = s + (e - s)/2;

//     if(arr[mid] == k)
//     return true;

//     if(arr[mid] < k)
//     return binarySearch(arr, mid+1, e, k);
//     else
//     return binarySearch(arr, s, mid-1, k);

    
// }
 
// int main()
// {
//     int arr[5] = {};
//     int n = 0;
//     int k = 8;

//     int s = 0;
//     int e = n-1;

//     if(binarySearch(arr, s, e, k))
//     cout << "value found";
//     else 
//     cout << "value not found";

//     return 0;
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int firstOccRec(vector<int>& arr, int s, int e, int k) {
    int ans = -1;
    if(s > e)
    return ans;

    
    int mid = s + (e-s)/2;
    
    if(arr[mid] == k) {
        ans = mid;
        return firstOccRec(arr, s, mid-1, k);
    }else if(k > arr[mid]) {
        return firstOccRec(arr, mid+1, e, k);
    } else {
        return firstOccRec(arr, s, mid-1, k);
    }
    
}

int peakValue(vector<int>& arr, int s, int e) {
        if(s > e)
        return s;

        int mid = s + (e-s)/2;
        if(arr[mid] < arr[mid + 1]) {
            peakValue(arr, mid+1, e);
        } else {
            peakValue(arr, s, mid);
        }
        
}

int main()
{
    vector<int> arr;

    arr.push_back(0);
    arr.push_back(9);
    arr.push_back(0);
    
    int s = 0;
    int e = arr.size() - 1;
    int k = 2;

    cout << peakValue(arr, s, e);
    return 0;
}