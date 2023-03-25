#include <iostream>
using namespace std;

int main()
{

    int sumUpTo, sum;
    sumUpTo =   10;
    int i = 0;
    sum = 0;
    while (i <= sumUpTo)
    {
        sum = sum + i;
        i++;
    };
    

    cout << "sum is " << sum << endl;
    return 0;
}