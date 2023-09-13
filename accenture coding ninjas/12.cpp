#include <iostream>
using namespace std;

bool fourChar(string str, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        count++;
    }
    if(count >= 4) {
        return 1;
    } else {
        return 0;
    }
}

bool digit(string str, int n) {
    
    for(int i = 0; i < n; i++) {
        if(str[i] >= 0 && str[i] <= 9) {
            return true;
        } else {
            return false;
        }
    }
}

bool capital(string str, int n) {
    
    for(int i = 0; i<n; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            return true;
        } else {
            return false;
        }
    }
}

bool specialChar(string str, int n) {
    for(int i = 0; i < n; i++) {
        if(str[i] != ' ' && str[i] != '/') return true;
        else return false;
    }
}

bool firstChar(string str, int n) {
    if(str[0] >= 0 && str[0] <= 9) return false;
    else return false; 
}

bool checkPassword(string str, int n) {
    if(fourChar && digit && capital && specialChar && firstChar) {
        return true;
    } else {
        return false;
    }
}
 
int main() {
    
    
    return 0;
}