#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int row = 1;

    while(row<=n){
        
        int col = 1;

        int value = n-row+1;

        int count = value;
        while(col<=row){
            char ch = 'A' + count -1;
            cout << ch;
            count++;
            col++;
        }
            cout << endl;
            row++;
    }

    return 0;
}