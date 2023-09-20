// we have two ways to implement stack
// 1. array
// 2. Linklist.

#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peak() {
        if(top >= 0 && top < size)
        return arr[top];
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        } else {
            return false;
        }
    }
};
 
int main()
{
    Stack st(5);

    st.push(22);
    st.push(32);
    st.push(56);


    cout << st.peak() << endl;
    st.pop();
    cout << st.peak();

    
    cout << endl;
    if(st.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    return 0;
}