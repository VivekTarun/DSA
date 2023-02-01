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

    //static allocation of memory
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl; 

    //Dynamically allocation of memory
    Hero *b =  new Hero;
    b -> setLevel('A');
    b -> setHealth(70);
    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl; 

    //Aacha tarita likhne ka
    cout << "level is " << b -> level << endl;
    cout << "health is " << b -> getHealth() << endl; 

    return 0;
}