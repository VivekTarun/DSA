#include <iostream>
using namespace std;

void bubbleSort(int* arr, int n) {

    for(int i = 1; i < n; i++) {
        //for round 1 to n-1
        bool swapped = false; // for optimization.

        // yaha n-i wla logic iss leye lag rha hai kyun ki hum round ko ghata'te ja rhe hain and last element sort hote jata hai 
        for(int j = 0; j < n - i; j++) {
            //process element till n-i th index
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            
            break;
        }
    }
}

void print(int* arr, int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int n = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int* arr = new int(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    print(arr, n);

    return 0;
}