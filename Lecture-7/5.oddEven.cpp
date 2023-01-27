#include <iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}
 
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

   if (isEven(num)) {
        cout << num << " is  Even" << endl;
    }
    else {
        cout << num <<  " is Odd" << endl;
    }
    return 0;
}