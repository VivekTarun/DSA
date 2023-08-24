#include <iostream>
#include <set>
using namespace std;
 
int main()
{   
    /*
        set mein if koi vlaue ek baar se jada hai tooh,
        wo ek baar hein aaye ga 2 baar memory mein jagah nhi lega.
    */
    set<int> s;

    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(11);

    for(auto i : s)
    cout << i << endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i : s)
    cout << i << endl;

    return 0;
}