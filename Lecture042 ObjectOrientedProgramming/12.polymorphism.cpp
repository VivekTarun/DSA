// two types -->
// 1. run time. -> dynamic polymorhism
// 2. compile time.
// function overloading can only be if we change the argument
// if we change the data type then the condition is not necessary to over load the function.
// operator overloading


#include <iostream>
using namespace std;

// class A {
//     public:
//     void sayHello() {

//     }
//     void sayHello() {

//     }
// };

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a + b;
    }

    void operator+ (B& obj) {
       /* int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1; */
        cout << "nhi karunga +" << endl;
    }
};
 
int main()
{

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    // B obj;
    // obj.a = 1;
    // obj.b = 2;
    // cout << obj.add() << endl;
    return 0;
}