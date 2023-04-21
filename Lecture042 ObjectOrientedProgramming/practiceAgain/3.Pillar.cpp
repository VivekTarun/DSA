//Encapsulation:
//wrapping up data member and function. 
// fully encaptulation wooh hota hai jaha sare ke sare data member private hai.

// #include <iostream>
// using namespace std;

// class Student {
//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     int getAge() {
//         return this -> age;
//     }


// };
 
// int main()
// {
//     Student first;
//     cout << "sab sahi chal rha hai" << endl;
//     return 0;
// }

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

    void setWight(int w) {
        this -> weight = w;
    }
};

class Male: public Human {
    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }
};
 
int main()
{
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;
    object1.sleep();

    object1.setWight(54);
    cout << object1.weight << endl;
    return 0;
}