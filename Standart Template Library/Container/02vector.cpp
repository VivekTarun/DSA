#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    /*
    It is dynamic is nature. -> Size iiska badha saqte hain.

    */
    vector<int> v;

    vector<int> a(5,1); // here 5 -> size of vector | 1 -> initilize all value with 1 | aagar koi value assign nhi karenge tooh size 0 hein rhegi. vector ki

    vector<int> last(a); // here last is the name of vector and uuseme hum a ko copy kar rhe hain.

    cout << "Print a" << endl;
    for(auto i : a)
    cout << i << " ";

    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity ->" << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;

    cout << "Element at 2nd Index " << v.at(2) << endl;

    cout << "Front -> " << v.front() << endl;
    cout << "Back -> " << v.back() << endl;


    cout << "Before pop" << endl;
    for(auto i : v)
    cout << i << " ";
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for(auto i : v)
    cout << i << " ";

    cout << "Before clear size: " << v.size() << endl;
    v.clear();
    cout << "After clear size: " << v.size() << endl;

    return 0;
}