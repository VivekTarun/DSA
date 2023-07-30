#include <iostream>
using namespace std;

void print(int n){
    //base case
    if(n == 0){
        return;
    }

    // Recursion relation
    print(n-1);
    
    cout << n << " ";
}
 
int main()
{
    int n;
    cout << "enter the value of n ";
    
    cin >> n;
    cout << endl;

    print(n);
    return 0;
} 