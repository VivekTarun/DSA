#include <iostream>
using namespace std;

void inserttionSort(int* arr, int n) {
    //Yaha i = 1 se iss leye start ho raha hai kyun ki pahele element ko sorted mante hain.
    for(int i = 1; i<n; i++) {

        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {

            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            } else {
                //Ruk jana hai 
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void print(int* arr, int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int* arr = new int(n);
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    inserttionSort(arr, n);
    print(arr, n);
    return 0;
}