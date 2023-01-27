// Arrays are never pass-by-value they are always pass by reference.
// But in premetive data type they are pass by value as well as reference and address.

#include <iostream>
using namespace std;

void update(int arr[] , int n ){
    cout << endl << "Inside the function";
    cout << endl;

    //update the array.
    arr[1]=120;
    for( int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main function";
    cout << endl;
}
 
int main()
{
    int arr[3] = {1,2,3};

    update(arr, 3);

    cout << "ptinting in main fuction" << endl;
    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}