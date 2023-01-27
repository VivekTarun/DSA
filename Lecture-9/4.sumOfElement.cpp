#include <iostream>
using namespace std;

int sum(int arr[] , int size){

    int sum = 0;
    for(int i = 0; i<5; i++){
        sum = sum + arr[i];
        // cout << arr[i] << " ";
    }
    cout << sum << endl;
    return sum;
}
 
int main()
{
    // Print sum of all element in an array.
    int arr[10] = {1,2,3,4,5};

    sum(arr,5);
    return 0;
}