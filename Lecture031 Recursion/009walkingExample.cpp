#include <iostream>
using namespace std;

void reachHome(int src, int dest) {

    cout << "source " << src << " destination " << dest << endl;
    //base
    if(src == dest) {
        cout << "pahooch gya " << endl;
        return;
    }

    //processing
    src++;

    //recursive call
    reachHome(src, dest);
}
 
int main()
{
    int dest = 10;
    int src = 1;

    cout << endl;
    reachHome(src, dest);
    return 0;
}   