#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair() {
        this -> first = T1();
        this -> second = T2();
    }

    Pair(T1 first, T2 second) {
        this -> first = first;
        this -> second = second;
    }
};
 
int main()
{
    Pair<int, int> data;
    data.first = 1;
    data.second = 2;

    Pair<int, char> money;
    money.first = 1;
    money.second = 'a';

    pair<bool, float> honey;
    honey.first = true;
    honey.second = 22.5f;
    
    return 0;
}