#include <iostream>
using namespace std;

void frequency(string str, char ch) {
    int arr[26] = {0};
    for(int i = 0; i<str.length(); i++) {
        int push = str[i] - 'a';
        arr[push]++;
    }
}
 
int main() {
    
    
    return 0;
}