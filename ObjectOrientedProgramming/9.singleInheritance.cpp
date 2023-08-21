#include <iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "speaking " << endl;
    }
};

class Dog: public Animal {

};

class GernanShepherd: public Dog {

};

int main()
{
   GernanShepherd g;
   g.speak();

    return 0;
}