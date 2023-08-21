#include <iostream>
using namespace std;
 
int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    cout << "Address of the first memory block is " << arr << " " << &arr[0] << endl;
    cout << *(arr + 1) << endl;

    return 0;
}