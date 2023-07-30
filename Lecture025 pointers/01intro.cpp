#include <iostream>
using namespace std;
 
int main()
{
    int num = 5;
    int *p = &num;

    int *q = p;
    cout << *q << endl;
    cout << p << endl;
    p = p+1;;
    cout << p << endl;
    return 0;
}