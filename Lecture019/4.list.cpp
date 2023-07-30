// list STL doubly link-list ka use kar ke banaya gya hai.

#include <iostream>
#include <list>
using namespace std;
 
int main()
{
    list<int> l;

    list<int> n(5,100); // nyi list banayi hai size 5 ki and initilize keya hai sab ko 100 se.

    cout << "Printint n" << endl;
    for(int i:l) {
        cout << i << " ";
    } cout << endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l) {
        cout << i << " ";
    } cout << endl;

    l.erase(l.begin());
    cout << "After erase" << endl;
    for(int i:l) {
        cout << i << " ";
    } cout << endl;
    return 0;
}