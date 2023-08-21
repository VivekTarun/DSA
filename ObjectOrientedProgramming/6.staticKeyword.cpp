/*
1. static keywords.
2. static func. 
   --> static func ke pass this keyword nhi hota kyun this keyword pointer to the current object hota 
   and iime koi current object hota hein nhi hia tooh this keyword kaha se hoga.
*/
#include <iostream>
using namespace std;

class Hero {
     
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

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

    static int random() {
        return timeToComplete;
    }

    //Destructor
    ~Hero() {
        cout << "Destructor is called " << endl;
    }
      
};

int Hero::timeToComplete = 5;
 
int main() {

    // cout << Hero::timeToComplete << endl; // ----- 1
    cout << Hero::random() << endl;

    // Hero a;

   // cout << a.timeToComplete <<endl; // -------- 2
    /*
    In both the above case output ll come but 
    static member doesn't belog to any data member so 

    2 is not the good practice 
    Logic wise both ll be samet but 
    1. is the optimised way to access the static data member.
    */

    return 0;
}