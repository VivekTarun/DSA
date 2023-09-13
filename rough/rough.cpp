// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int getLength(string str) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

string reverseString(string str, int length) {
    string ans = str;
    int start = 0;
    int end = length-1;
    
    while(start <= end) {
        swap(ans[start++], ans[end--]);
    }
    return ans;
}

bool checkPalindrome(string str, string name) {
    if(str == name) return true;
    else return false;
}
int main() {
    
    string name = "viv";
    int length = getLength(name);
    cout << length << endl;
    string reverse = reverseString(name, length);
    checkPalindrome(name, reverse) ? cout << "yes Palindrome" : cout << "Not palindrome";

    return 0;
}