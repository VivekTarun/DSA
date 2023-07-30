#include<iostream>
#include<algorithm>


using namespace std;

class Fraction {

    // Complete the class
    int numerator;
    int denominator;

    public:

    Fraction(int numerator, int denominator) {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    

    void add(Fraction temp) {
        this -> numerator = numerator * temp.denominator + denominator * temp.numerator;
        this -> denominator = denominator * temp.denominator;
    }

    void multiply(Fraction temp) {
        this -> numerator = numerator * temp.numerator;
        this -> denominator = denominator * temp.denominator;
    }

    void print() {
        cout << "Answer is: " << numerator/denominator;
    }
};

int main() {

    //Write your code here
    int num1, num2, den1, den2;

    cin >> num1 >> den1;
    cin >> num2 >> den2;

    Fraction f1(num1, den1);
    Fraction f2(num2, den2);

    int choice;
    cin >> choice;

    if(choice == 1) {
        f1.add(f2);
        f1.print();
    } else {
        f1.multiply(f2);
        f1.print();
    }


    return 0;
}
