#include <iostream>
using namespace std;
 
int main()
{
    int n = 4;

    int row = 1;

    while(row<=n){
        
        //space print karlo.
        int space = n-row;
        while(space){
            cout<< "  ";
            space--;
        }
        //stars print karlo.
        int col = 1;
        int count = 1;

        while(col <= row){
            cout << count << " ";
            count++;
            col = col + 1;
        }

        // Third Triangle.
        int num = row -1;
        while(num){
            cout << num << " ";
            num--;
        }
        cout << endl;
        row++;
    }
    return 0;
}
/*
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 
*/