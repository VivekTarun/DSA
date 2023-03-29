// If there is no property in class then size is 1 byte
// padding of memory is done. --> int + char = sizeof() --> 5 but ans will be 8
// gready alignment.
// *this store the address of the object of the class.
#include <iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    

    // jaise hein hum khud ki constructer ki implemention yaha likh dete hain default constructer haat jata hai aapne aap.
    Hero() {
        cout << "constructer called." << endl;
    }

    //parametrised constructer
    Hero (int health) {
        (*this).health = health;
        // this -> health = health;
    };

    Hero (int health, char level) {
        this -> health = health;
        this -> level = level;
    }
    char level;

    void print() {
        cout << level << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }   

    void setLevel(char l) {
        level = l;
    }
};
 
int main()
{


    cout << "hi " << endl;
    // statically
    Hero ramesh;
    ramesh.print();

    // Dynamically
    Hero *h = new Hero;
    h -> print();

    Hero temp(22, 'B');
    temp.print();











    // Hero ramesh; // jab bhi object ko create karte hain ek chij call hoti hai constructer. --> object create hone ke time pe invoke hota hai.
    // // statically allocation
    // Hero a;
    // cout << "level is " << a.level << endl;
    // cout << "health is " << a.getHealth() << endl; 
    // //dynamically

    // //how we do in int
    // // ek int ko heap mein allocate karte hain and jaha allocate karete hain uuska address store karwa lete hain pointer mein
    // int *i = new int;
    // Hero *h = new Hero; 
    // cout << "level :" << (*h).level << endl;
    // cout << "health :" << (*h).getHealth() << endl;

    // cout << "level :" << h -> level << endl;
    // cout << "health :" << h -> getHealth() << endl;


    // // //creation of object
    // // Hero ramesh;

    // // cout << "ramesh health is : " << ramesh.getHealth() << endl;
    // // ramesh.setHealth(70);
    // // // ramesh.health = 10;
    // // ramesh.level = 47;

    // // cout << "size " << sizeof(ramesh) << endl;
    // // cout << "health is: " << ramesh.getHealth() << endl;
    // // cout << "level is: " << ramesh.level << endl;
    // // // return 0;
}