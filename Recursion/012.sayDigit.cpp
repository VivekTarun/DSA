#include <iostream>
using namespace std;

void sayDigit(int n, string arr[]) {
    //base case
    if(n == 0) {
        return;
    }

    //processing
    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);

    cout << arr[digit] << " ";
    
}
 
int main()
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n;
    cout << "Enter the value of n ";
    cin >> n;

    cout << endl;

    sayDigit(n, arr);
    return 0;
}