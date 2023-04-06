#include <iostream>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;

    for(int i = 0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    //returning the maximum value
    return max;
}
int getMin(int num[], int n){
    int mini = INT_MAX;

    for(int i = 0; i<n; i++){
        mini = min(mini , num[i]);
        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    //returning the maximum value
    return mini ;
}
 
int main()
{
    /* This is a very bad practice
    int size;
    cin >> size;

    int num[size];
    
    */

    int size;
    cin >> size;
    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}