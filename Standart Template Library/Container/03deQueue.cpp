#include <iostream>
#include <deque>
using namespace std;
 
int main()
{
    /*
        It is a type of queue  which can be operated by both front and end.
        Implementation can be done by Array.
    */
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(auto i : d)
    cout << i << " ";

    d.pop_back();
    cout << endl;

    for(auto i : d)
    cout << i << " ";

    cout << "first index of element" << d.at(1) << endl;

    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;

    d.empty() ? cout << "yes empty" : cout << "not emtpy";
    cout << endl;

    cout << "Before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase " << d.size() << endl;

    return 0;
}