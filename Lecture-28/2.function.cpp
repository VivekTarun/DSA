#include <iostream>
using namespace std;

int& func (int a) {
    int num = a;
    int& ans = num;
    return ans;
}

void update1(int n) {
    n++;
}

void update2 (int& n) {
    n++;
}
  
int main()
{
    int n = 5;
    cout << "before " << n << endl;
    // update1(n);
    // update2(n);
    func(n);
    cout << "after " << n << endl;
    return 0;
}