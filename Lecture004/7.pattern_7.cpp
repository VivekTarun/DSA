#include <iostream>
using namespace std;
 
int main()
{
    int n = 5;

    int row = 1;
    int count = 1;

    while(row<=n){

        int col = 1;
        int value = count;
        while(col<=row){
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;
        row++;
        count++;
    }
    
    return 0;
}
// Solve the above Q without using row value.