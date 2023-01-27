#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    //    int key = 0;
    for(int i = 0; i < size; i++){
          bool mila = false;
          for(int j = i+1 ; j < size; j++){
              if(arr[i] == arr[j]){
                  mila = true;
                  break;
                }
              else{
                mila = false;
              }
            }
          for(int j = i-1; j>=0; j--){
            if(arr[i] == arr[j]){
                  mila = true;
                  break;
                }
              else{
                mila = false;
              }
          }
        if(mila == false){
            int ans = arr[i];
            return ans;
        }
    }
    
}
int main()
{
    int arr[11]= {5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8 };
    findUnique(arr, 11);

    return 0;
}