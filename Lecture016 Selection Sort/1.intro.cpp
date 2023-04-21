// selection sort.

// increasing order mein |decreasing order mein arrange karne ko sorting kehte hain

// what is selection sort 
// -> different round ya different passes hote hain

#include <iostream>
using namespace std;

void selectionSort(int *arr, int n) {

    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;
    // int* ptr = new int; // dynamic decleration of int data-type 
    int* arr = new int(n); // dynamic decleration of array 

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    print(arr, n);

    return 0;
}