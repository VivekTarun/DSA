#include <iostream>
using namespace std;

template <typename t1, typename t2>
class Pair {
public:
    t1 first;
    t2 second;

    Pair() : first(t1()) {
        
        this -> second = t2();
    }

    Pair(const t1& f, const t2& s) {
        this -> first = f;
        this -> second = s;
    }
};
 
int main()
{
    Pair<int, char> front;
    front.first = 1;
    front.second = 'a';
    cout << front.first << " " << front.second << endl;

    return 0;
}