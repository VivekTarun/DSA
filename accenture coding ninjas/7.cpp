#include <iostream>
using namespace std;

void replaceString(string str, char ch1, char ch2) {
    for(int i = 0; i <str.length(); i++) {
        if(str[i] == ch1) str[i] = ch2;
        else if(str[i] == ch2) str[i] = ch1;
    }
    cout << str << endl;
}

int main() {
    
    string str = "apple";
    char ch1 = 'p';
    char ch2 = 'a';
    replaceString(str, ch1, ch2);
    return 0;
}