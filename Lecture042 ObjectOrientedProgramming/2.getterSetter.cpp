#include <iostream>
using namespace std;

class Hero {
     
    private:
    int health;
    public:
    char level;

    int getHealth() {
        return health;
    }

    int getlevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
      
};
 
int main() {

    Hero ramesh;

    cout << "Ramesh health is " << ramesh.getHealth() << endl;


    // As expected the size is 5bytes but it ll come 8byte becausing of padding of memory.
    // The same we call greedy alignment.
    cout << "Size of ramesh is " << sizeof(Hero) << endl;
    cout << "Size of ramesh is " << sizeof(ramesh) << endl;

    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout << "health is: " << ramesh.getHealth() << endl;
    cout << "level is: " << ramesh.level << endl;
    return 0;
}