#include <iostream>
using namespace std;
 
int main()
{
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;

    cout << first << endl;
    cout << &first << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *q << endl;
    
    return 0;
}