#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void updata(int *p) {
    *p = *p + 1;
    p = p + 1;
    cout << "inside " << p << endl;
} 
int main()
{
    int value = 5;
    int *p = &value;

    cout << "Before " << p << endl;
    updata(p);
    cout << "After " << p << endl;

    return 0;
}