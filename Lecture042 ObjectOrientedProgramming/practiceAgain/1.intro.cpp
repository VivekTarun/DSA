#include <iostream>
using namespace std;
 // Bahoot mahatpurna baat 
 // ek bhi constructer ki custom implementation(chaye wooh parametrised ho ya non parametrised ho) aap likh dete ho tooh default constructer haat | maar jata hai
class Hero {
    //properties
    private:
    int health;
    public:
    char name[100];
    char level;

    //koi constructer nhi banaya hia iiska matlab pahele se hein default constructer hai 

    Hero() {
        // jaise hein hum aapni khud ki constructer ki implementation likh dete hain default constructer khatam ho jata hai.

        cout << "Constructer called" << endl;
    }

    //parametrised contructer
    Hero(int health) {
        //because scope theory is applied here.
        this -> health = health;
        (*this).health = health; // this is pointer pointing to current object. object - eg. ramesh h a b.
        // this is pointing to ramesh.
        cout << "Value of this: " << this << endl;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    void print() {
        cout << level << endl;
        cout << health << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int health) {
        this -> health = health;
    }

    void setLevel(char level) {
        level = level;
    }

};
// int main()
// {
//     //cration of object
//     Hero ramesh;
//     ramesh.setHealth(10);
//     ramesh.level = 'a';

//     cout << sizeof(ramesh);
//     cout << endl;

//     //access the data member
//     // using . operator
//     cout << "health is: " << ramesh.getHealth() << endl; 
//     cout << "level is: " << ramesh.level << endl; 

//     return 0;
// }  

// int main() {

//     Hero a;
//     a.setLevel('a');
//     a.setHealth(19);
//     cout << "level is: " << a.getLevel() << endl;
//     cout << "health is: " << a.getHealth() << endl;
    
//     int *i = new int;
//     Hero *b = new Hero;
//     b -> setHealth(123);
//     b -> setLevel('a');
//     cout << "level is: " << (*b).getLevel() << endl;
//     cout << "health is: " << (*b).getHealth() << endl;
    
//     cout << "level is: " << b -> getLevel() << endl;
//     cout << "health is: " << b -> getHealth() << endl;



// }

int main() {
    //jab bhi hum koi object banate hain tooh constructer call hota hai
    //if hum aapna constructer na banaye tooh default constructer hota hai.
    // default constructer mein koi return type bhi nhi hota hai 
    // and koi input parameter bhi nhi hota hai.


    //object created statically.
    Hero ramesh(10);
    cout << "Address of ramesh: " << &ramesh << endl;
    ramesh.print();
    //dynamically
    Hero *h = new Hero(11); //constructer is with no parameter.
    h -> print();
    //statically call or dynamic call in both case the same constructer will be called

    //parametrised constructer.
    Hero temp(11, 'd');
    temp.print();
}

