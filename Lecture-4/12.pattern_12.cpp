#include <iostream>
using namespace std;
 
int main()
{
    int n = 3;

    int row = 1;

    while(row<=n){
        int col = 1;

        while(col<=n){
            char value = 'A'+row+col-1-1;
            cout << value << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}