#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    // int i = 1;
    // for( ; ;){
    //     if(i<=n){
    //     cout << i << " ";
        
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    for(int a = 0 , b = 1 ; a>=0 && b>=1; a--, b-- ){
        cout << a << " " << b << endl;
    }

    return 0;
}