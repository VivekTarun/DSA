// we have two ways to implement stack
// 1. array
// 2. Linklist.

#include <iostream>
using namespace std;

class Stack {
    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    //consturctor.
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
            cout << "stack overflow" << endl;
        }
    }
    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }
    int peek() {
        if(top >= 0 ) {
            return arr[top];
        } else {
            cout << "stack is empty" << endl;
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


    cout << st.peek() << endl;
    st.pop();
    cout << st.peek();

    
    cout << endl;
    if(st.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    return 0;
}