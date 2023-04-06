#include <iostream>
using namespace std;
 
int main()
{
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;
    // Null character aate hein print karna chor dega

    name[2] = '\0';
    cout << "Your name is " << name << endl;

    return 0;
}