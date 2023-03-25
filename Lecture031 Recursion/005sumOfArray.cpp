#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1) {
        return arr[0];
    }

    int remaningPart = sum(arr + 1, size - 1); 
    int sum = arr[0] + remaningPart;






    // int ans = 0;
    // for(int i = 0; i < size; i++) {
    //     ans = ans + arr[i];
        
    // }
    return sum;
}
 
int main()
{
    int arr[5] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(int);
    // cout << size << endl;
    int ans = sum(arr, size);
    // cout << sizeof(arr);
    cout << ans << endl;
    return 0;
}

