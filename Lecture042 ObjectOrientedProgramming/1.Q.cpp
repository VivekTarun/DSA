#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    int real;
    int imaginary;

    public:

    ComplexNumbers (int real, int imaginary) {
        this -> real = real;
        this -> imaginary = imaginary;
    }

    void print() {
        cout << real << " + i" << imaginary << endl;    
    }

    void multiply(ComplexNumbers temp) {
       this -> real = real * temp.real - imaginary * temp.imaginary;
       this -> imaginary = real * temp.imaginary + imaginary * temp.real;
        

    }

    void plus(ComplexNumbers temp) {
        this -> real = real + temp.real;
        this -> imaginary = imaginary + temp.imaginary;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    real1 = 3;
    imaginary1 = 6;
    real2 = 7;
    imaginary2 =9;
    // cin >> real1 >> imaginary1;
    // cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    // cin >> choice;
    choice = 2;
    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}