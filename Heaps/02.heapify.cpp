#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int index = i;
    int leftIndex = 2*i;
    int rightIndex = 2*i + 1;

    int largest = index;

    if(leftIndex <= n && arr[largest] < arr[leftIndex]) {
        largest = leftIndex;
    }
    if(rightIndex <=    n && arr[largest] < arr[rightIndex]) {
        largest = rightIndex;
    }

    if(index != largest) {
        //left ya right child me se koi > hogya current node se.
        // swap karna hoga
        swap(arr[index] , arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
}

void buildHeap(int arr[], int n) {
    for(int i = n/2; i > 0; i--) {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n ) {
    int index = n;

    while(n != 1) {
        swap(arr[1], arr[index--]);
        index--;
        n--;

        //heapify
        heapify(arr, n, 1); // hume bhejna hai index but uuper 
                            // tooh swap kark liye hain index and arr[1] ko 
                            // iss liye argument mein 1 pass kar rhe hain.
    }
}
 
int main() {
    int arr[] = {-1, 12, 15, 13, 11, 14};
    int n = 5;

    buildHeap(arr, n);
    
    cout << "Pirnt the heap " << endl;
    for(int i = 0; i<=n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    
    return 0;
}