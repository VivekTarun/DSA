/*
jaise construction ek hein baar call hota hai object creation ke time 
waise hein destructure bhi ek hein baar call hota hai object deletion ke time.  
Destructor is used for deallocate the memory.
*/
#include <iostream>
using namespace std;

class Hero {
     
    private:
    int health;

    public:
    char *name;
    char level;


    //As we write this constructor the default exist ll delete there after.
    Hero() {
        cout << "Constructor Called " << endl;
        name = new char[100];
    }

    //parametrised constructor
    Hero(int health) {
        // (*this).health = health; --> this is a pointer through which we are accessing the current object.
        this -> health = health;
        cout << "this -> " << this << endl;

    }
    //constructor.
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //It is also a constructor.
    //Print fcn.
    void print() {
        cout << endl;
        cout << "Name: " << this -> name << endl;
        cout << "health is " << this -> health << endl;
        cout << "level is " << this -> level << endl;
    }
    //copy constructor 
    Hero(Hero& temp) {
        cout << "copy constructor is called " << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }
  
    //Getter and setter.
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

    void setName(char name[]) {
        strcpy(this -> name, name);
    }



    //Destructor
    ~Hero() {
        cout << "Destructor is called " << endl;
    }
      
};
 
int main() {


    //static
    // VVI jo bhi object statically banate hain uske leye destructure automatically call hota hai but Dynamically jo object banate hain uus case mein aaisa nhi hota hai.
    Hero a;

    //dynamic
    //Dynamic allocation ke leye destructure ko manually call karna parta hai.
    Hero *b = new Hero();
    delete b;


























    // Hero hero1;

    // hero1.setLevel('D');
    // hero1.setHealth(12);
    // char name[6] = "vivek";
    // hero1.setName(name);

    // hero1.print(); 





    //copy function is called.
    // Hero s(70, 'C');
    // s.print();

    // Hero R(s);
    // R.print();


    //---------------------------------------





    //Object created statically
    // Hero ramesh(10);
    // cout << "Address of ramesh " << &ramesh << endl;
    // ramesh.print();
     
    // //Dynamically
    // Hero *h = new Hero;
    // h -> print();


    // Hero temp(22, 'B');
    // temp.print();














    // //static allocation of memory
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout << "level is " << a.level << endl;
    // cout << "health is " << a.getHealth() << endl; 

    // //Dynamically allocation of memory
    // Hero *b =  new Hero;
    // b -> setLevel('A');
    // b -> setHealth(70);
    // cout << "level is " << (*b).level << endl;
    // cout << "health is " << (*b).getHealth() << endl; 

    // //Aacha tarita likhne ka
    // cout << "level is " << b -> level << endl;
    // cout << "health is " << b -> getHealth() << endl; 

    return 0;
}