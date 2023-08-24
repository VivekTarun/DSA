#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    stack<string> s;

    s.push("vivek");
    s.push("tarun");
    s.push("kumar");

    cout << "Top Element -> " << s.top() << endl;
    s.pop();
    cout << "Top Element -> " << s.top() << endl;

    cout << "size of stack " << s.size() << endl;

    s.empty() ? cout << "yes empty" : cout << "not empty";

    

    return 0;
}