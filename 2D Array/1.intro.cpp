#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int row = 0; row<3; row++) {
        for(int col = 0; col<4; col++) {
            if(arr[row][col] == target) {
                return 1;
            }
        }
    }
}

void rowWiseInput(int arr[][4], int row, int col) {
    for(int row = 0; row<3; row++) {
        for(int col = 0; col<4; col++) {
            cin >> arr[row][col];
        }
    }
}

void colWiseInput(int arr[][4], int row, int col) {
    for(int col = 0; col<4; col++) {
        for(int row = 0; row<3; row++) {
            cin >> arr[row][col];
        }
    }
}

void rowWiseOutput(int arr[][4], int row, int col) {
    for(int row = 0; row<3; row++) {
        for(int col = 0; col<4; col++) {
            cout << arr[row][col];
        }
    }
}

void colWiseOutput(int arr[][4], int row, int col) {
    for(int col = 0; col<4; col++) {
        for(int row = 0; row<3; row++) {
            cout << arr[row][col];
        }
    }
}

void PrintSum(int arr[][4], int row, int col) {
    //rowWiseSum.
    cout << "print sum: " << endl;
    for(int row = 0; row<3; row++) {
        int sum = 0;
        for(int col = 0; col<4; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

void largestRowSum(int arr[][4], int row, int col) {
    int largeSum = INT_MIN;
    for(int row = 0; row<3; row++) {
        int sum = INT_MIN;
        for(int col = 0; col<4; col++) {
            sum += arr[row][col];
        }
        if(largeSum < sum) largeSum = sum; 
    }
    cout << "The maximum sum is: " << largeSum << endl;
}
int main() {
    
   /* int arr[3][4] = {1,2,3,4,5,6,7,8,1,2,3,4};
    int arrr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}}; */


    int arr[3][4];
    cout << "Enter the val " << endl;

    rowWiseInput(arr, 3, 4);
    PrintSum(arr, 3, 4);
    
    // cout << "Enter the target:  " << endl;
    // int target;
    // cin >> target;

    // if(isPresent(arr, target, 3, 4)) {
    //     cout << "Found" << endl;
    // } else {
    //     cout << "Not found" << endl;
    // }

    
    return 0;
}