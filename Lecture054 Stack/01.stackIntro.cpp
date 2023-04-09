// what is stack -> aata hai
// stack ka use karna code mein -> ye bhi hume aata hai

#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout << "printing top element " << s.top() << endl;

    if(s.empty()) {
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is not empty" <<endl;
    }

    cout << "Size of stack is: " << s.size() << endl;
    return 0;
}