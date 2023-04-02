// Encapsulation -> wrapping up data member in a capsule.
// data member and function ko single entity mein add kar dete hain tooh usse kehte hian ki humne encapsualation accive kar leya 
// fully excapsulated class -> all data member are privaate marked.
// why we do excaplutation -> information hiding.
// -> Read only data bana saqte hain.
// we we do abstaction -> implementation hiding.

// inheritance what -> teri height tere papa ki jaisi hai
// tere papa ke jaise hain.
// class A ki kuch property inherit kar li class B ne.
#include <iostream>
using namespace std;
 
class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this -> age;
    }
    void setWeight(int w) {
        this -> weight = w;
    }
};

class Male: private Human {
    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }  
};
 
int main() {

    Human h1;
    Male object1;
    cout << h1.age;
    cout << object1.age;
    return 0;
}