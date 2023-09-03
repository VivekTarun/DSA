#include <iostream>
using namespace std;



class three {
public:
    int first;
    int second;
    int third;

    three(int f, int s, int t) {
        this -> first = f;
        this -> second = s;
        this -> third = t;
    }
};

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;
    Pair() {

    }

    Pair(const T1 first, const T2 second) {
        this -> first = first;
        this -> second = second;
    }
};

template <typename T1, typename T2, typename T3>
class Triple {
public:
    T1 first;
    T2 second;
    T3 third;

    Triple(const T1& f, const T2& s, const T3& t) : first(f), second(s), third(t) {};
};

template <typename t1, typename t2, typename t3, typename t4>
class four {
public:
    t1 first;
    t2 second;
    t3 third;
    t4 fourth;

    four() : first(t1()), second(t2()), third(t3()), fourth(t4()) {}

    four(t1 first, t2 second, t3 third, t4 fourth) {
        this -> first = first;
        this -> second = second;
        this -> third = third;
        this -> fourth = fourth;
    }
};

int main()
{
    Pair<int, int> var1 (0,0);
    var1.first = 20;
    
    pair<int, int> honey;
    honey.first = 10;
    honey.second = 12;
    cout << "first element is: " << var1.first << endl;
    cout << "second element of honey: " << honey.second << endl;

    Triple<int, int, int> money(1,2,3);

    cout << "Enter the third value of triple: " << money.third;
    
    char nothing = '\0';
    cout << endl << "nothing: " << nothing << endl;
    string name = "";
    cout << endl << "name: " << name << endl;

    four<int, int, int, int> hero;
    hero.first = 22;
    cout << "hero -> first: " << hero.first << endl;
    return 0;
}