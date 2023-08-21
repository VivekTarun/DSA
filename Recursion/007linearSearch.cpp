#include <iostream>
using namespace std;
void print(int* arr, int size) {
    cout << "size of arry is " << size << "    ";

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key) {
    //Base case
    print(arr, size);
    if(size == 0){
        return false;
    }

    //processing and recursive call.
    if(arr[0] == key) {
        return true;
    } else {
        bool remainingPart = linearSearch(arr+1, size-1, key);
        return remainingPart;
    }


}
 
int main()
{
    int arr[5] = {2,4,6,8,9};
    int size = sizeof(arr)/sizeof(int);
    int key = 8;

    for(int x: arr) {
        cout << x << " ";
    }

    bool ans = linearSearch(arr, size, key);
    if(ans)
    cout << "present" << endl;
    else
    cout << "absent" << endl;
    return 0;
}