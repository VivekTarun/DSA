//vector is a dynamic array.
//
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Starting mein vector ki capacity 0 hoti hai
    
    vector<int> v;

    vector<int> a(5,1); // Iska matlab hua 5 size ka vector bana de and ans sare ko 1 se initilize kar de if koi value nhi dete tooh sare value 0 se initilize ho jate.
    cout << "Print" << endl;
    for(int i:a) {
        cout << i << " ";
    } cout << endl;

    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;

    cout << "Element at 2nd Index " << v.at(2) << endl;

    cout << "First Element -> " << v.front() << endl;

    cout << "Last Element -> " << v.back() << endl;

    cout << "Before pop" << endl;
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for(int i:v) {
        cout << i << " ";
    } 
    cout << endl;

    // when we clear a vector size will be 0 but capacity will not be 0.
    cout << "Before clear size " << v.size() << endl;
    v.clear();
    cout << "After clear size " << v.size() << endl;
    return 0;
}