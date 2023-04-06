#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

void swapAltrnate(int arr[], int size){

    for(int i =0; i<size; i+=2){
        if((i=+1 )< size){
            swap(arr[i], arr[i+1]);
        }
    }
}
 
int main()
{
    
    int even[8]= {5,3,4,2,1,7,8,6};
    int odd[5]= {3,4,2,1,5};
    
    swapAltrnate(even, 8);
    printArray(even, 8);
    swapAltrnate(odd, 5); 
    printArray(odd, 5);

    return 0;
} 



