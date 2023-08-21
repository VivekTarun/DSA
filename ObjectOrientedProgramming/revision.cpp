// #include <iostream>
// using namespace std;

// class Hero {
//     public:
//     int health;
//     char level;

//     int getHealth() {
//         return health;
//     }

//     int getLevel() {
//         return level;
//     }

//     void setHealth(int h) {
//         health = h;
//     }

//     void setLevel(char ch) {

//     }
// };
 
// int main()
// {
//     // static allocation of memory
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout << "level is " << a.level << endl;
//     cout << "health is " << a.getHealth() << endl;
    
//     // dynamically allocation of memory
//     Hero *b = new Hero;
//     int *ptr = new int;
//     b -> setLevel('A'); // (*b).level
//     b -> setHealth(70);
//     cout << "level is " << (*b).level << endl;
//     cout << "health is " << (*b).health << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;


 
// int main()
// {
//     int a = 5;
//     int *ptr = &a;

//     cout << a << endl;
//     cout << &a << endl;
//     cout << ptr << endl;
//     cout << *ptr << endl;

//     int* n = new int;
//     *n = 5;

//     cout << *n <<endl;

//     return 0;
// } 

#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        cout << "construter called." << endl;
        name = new char[100];
    }

    Hero(int health) {
        (*this).health = health;
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }
};

 
int main()
{
    
    return 0;
}