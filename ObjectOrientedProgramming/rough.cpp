#include <iostream>
using namespace std;
 
int main()
{
    int i = 10;
    int *ptr = &i;
    cout << "i " << i << endl;
    cout << "&i " << &i << endl;
    cout << "*ptr " << *ptr << endl;
    cout << "ptr " << ptr << endl;
    return 0;
}