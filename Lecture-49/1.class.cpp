#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{
public:
    char name[100];
    int health;
    char level;
};

int main()
{
    Hero ramesh;

    cout << "health is: " << ramesh.health << endl;
    cout << "level is: " << ramesh.level << endl;

    return 0;
}