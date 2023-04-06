#include <iostream>
using namespace std;
 
int main()
{
    int n = 4;

    int row = 1;

    while(row<=n){
        
        //space print karlo
        int space = n-row;
        while(space){
            cout<< " ";
            space--;
        }
        //stars print karlo
        int col = 1;
        while(col <= row){
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row++;
    }
    return 0;
}