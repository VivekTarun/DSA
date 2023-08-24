#include <iostream>
#include <list>
using namespace std;
 
int main()
{
    /*
        It's implementation is by doubly link list.
        it has two pointer one at front and one at back
        direct access is not possible as in vector and array 
        we have to triverse through the list to access the element.
    */

    list<int> l;

    list<int> n(5,100);
    cout << "Print n" << endl;
    for(auto i : n)
    cout << i << " ";

    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for(int i : l) 
    cout << i << " ";

    cout << endl;

    l.erase(l.begin());
    cout << "After erase" << endl;
    for(int i : l)
    cout << i << " ";

    cout << "Size of list " << l.size() << endl;

    return 0;
}