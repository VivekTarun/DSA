/*
TOPIC DELT:
1. ACCESS MODIFIER =>  public | private.
     public -> can be access in the class and outside of the class
     private -> can't be access outside of the class 
2. Protected.

class
instintation

*/
#include <iostream>
using namespace std;

//class bana rhe hain
class Hero {
     
     public:
     int health;
     char level;
     
};
int main() {

    //onject instatiate kar rhe hain
    Hero ramesh;

    ramesh.health = 10;
    ramesh.level = 'A';

    cout << "health is: " << ramesh.health << endl;
    cout << "level is: " << ramesh.level << endl;
    return 0;
}