#include <iostream>
#include <deque>
using namespace std;
//Dynamic
 
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(3);

    for(int i: d) {
        cout << i << " ";
    } cout << endl;

    // d.pop_front();
    // cout << endl;
    // for(int i: d) {
    //     cout << i << " ";
    // } cout << endl;



    cout << "Print first Index element -> " << d.at(1) <<endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "Before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1); //erase karne ke liye batana parta hai kaha se kaha taak delete karna hai.
    cout << "Before erase " << d.size() << endl;

    for(int i: d) {
        cout << i << " ";
    } cout << endl;



    return 0;
}