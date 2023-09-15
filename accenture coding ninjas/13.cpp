#include <iostream>
using namespace std;

pair<int, int> maxi(int *arr, int n) {
    pair<int, int> p(INT_MIN, -1);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > p.first) {
            p.first = arr[i];
            p.second = i;
        }
    }
    return p;
}
 
int main() {
    
    int arr[] = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};

    pair<int, int> maximum = maxi(arr, 10);
    cout << maximum.first << " " << maximum.second;
    return 0;
}