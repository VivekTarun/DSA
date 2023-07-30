#include <iostream>
using namespace std;

void update(int **p2) {
    p2 = p2 + 1; // kuch change hoga - no

    *p2 = *p2 + 1; //kuch change hoga - yes

    **p2 = **p2 + 1; // kuch change hoga - yes
}
 
int main()
{
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << "i -> " << i << endl;
    cout << "*p -> " << *p << endl;
    cout << "**p2 -> " << **p2 << endl; 
    cout << endl;
    cout << "&i -> " << &i << endl;
    cout << "p -> " << p << endl;
    cout << "*p2 -> " << *p2 << endl;
    cout << endl;
    cout << "&p -> " << &p << endl;
    cout << "p2 -> "<< p2 << endl;

    return 0;
}p