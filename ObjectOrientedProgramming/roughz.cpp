#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Constructor called" << endl;
        name = new char[100];
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero &temp) {
        cout << "copy constructor called" << endl; 
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print() {
        cout << "health " << this -> health << endl;
        cout << "level" << this -> level << endl;
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
    void setLevel(char ch) {
        level = ch;
    }
    void setName(char name[]) {
        strcpy(this->name, name);
    }

     

    ~Hero() {
        cout << "Destructor bhai called" << endl;
    }
};

int Hero::timeToComplete = 5;
 
int main()
{   
    cout << Hero::timeToComplete << endl;



    //static
    Hero a;

    //Dynamic
    Hero *b = new Hero(); 
    delete b;
    return 0;
} 