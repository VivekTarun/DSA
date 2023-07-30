#include <iostream>
#include <queue>
using namespace std;
 
int main()
{
    queue <string> q;

    q.push("honey");
    q.push("vivek");
    q.push("tarun");

    cout << "First Element " << q.front();
    cout << endl; 
    q.pop();
    cout << "First Element " << q.front();
    cout << endl;
    return 0;
}