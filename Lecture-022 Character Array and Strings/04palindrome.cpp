#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    // This function for making case insensetive.
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(char name[], int n) {
    int s = 0;
    int e = n -1;

    if(s <= e) {
        if (toLowerCase( name[s] ) != toLowerCase( name[e] ) ) {
            return 0;
        } else {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[] ) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}
 
int main()
{
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;

    cout << "Your name is " << name << endl;

    int length = getLength(name);

    bool palindrom = palindrome(name, length);


    if (palindrom) {
        cout << name << " is a palindrome" << endl;
    } else {
        cout << name << " is not a palindrome" << endl;
    }

    return 0;
}





// class Solution {
// private:
//     bool removeNonAlphaNum(char ch) {
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
//             return 1;
//         } else {
//             return 0;
//         }
//     }

//     char toLowerCase(char ch) {
//         if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
//             return ch;
//         } else {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }

//     bool palindrome(string a) {
//     int s = 0;
//     int e = a.length() - 1;

//     while(s <= e) {
//         if (a[s] != a[e]) {
//             return 0;
//         } else {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// public:
//     bool isPalindrome(string s) {
        
//         //faltu character hatana hai 
//         string temp = "";

//         for(int j = 0; j < s.length(); j++) {
//             if(removeNonAlphaNum(s[j])) {
//                 temp.push_back(s[j]);
//             }
//         }

//         for(int j = 0; j < s.length(); j++) {
//             temp[j] = toLowerCase(s[j]);
//         }

//         //check palindrome
//         return palindrome(temp);

//     }
// };