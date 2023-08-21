// char a = 'z'; -> iisme single character hein store kar payenge 
// Now introducing character array.
// -> String in c++ -> 1-Dimensional char Arrays.

// cin -> exicution ko stop kar deta hai  space tab or new line character denge.

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     char name[20];

//     cout << "Enter the value of name: " << endl;
//     cin >> name;
//     name[2] = '\0';

//     cout << "Your name is ";
//     cout << name << endl;

//     return 0;
// }





// Q: Find the length of string.

// #include <iostream>
// using namespace std;

// int getLength(char name[]) {
//     int count = 0;
    
//     for(int i = 0; name[i] != '\0';i++) {
//         count++;
//     }

//     return count;
// }
 
// int main()
// {
//     char name[20];
//     cout << "Enter the value of name: ";
//     cin >> name;
//     cout << "your name is: " << name << endl;

//     cout  << "length of your name: " << getLength(name) << endl;

//     return 0;
// }




// Q: Reverse a sting.

// #include <iostream>
// using namespace std;

// void reverse(char name[], int n) {
//     int s = 0;
//     int e = n - 1;

//     while(s<e) {
//         swap(name[s++], name[e--]);
//     }
// }

// int getLength(char name[]) {
//     int count = 0;
    
//     for(int i = 0; name[i] != '\0';i++) {
//         count++;
//     }

//     return count;
// }
 
// int main() {

    // char name[20];
    // cout << "Enter the value of name: ";
    // cin >> name;
    // cout << "your name is: " << name << endl;

    // int length = getLength(name);

    // cout << "length of your name: " << length << endl;
    // reverse(name, length);

    // cout << "Reversed sring: " << name << endl;

//     return 0;
// }


// Q: Check if the sting is panlindrome.
// HW 
/*
https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633

*/

// #include <iostream>
// using namespace std;

// char toLowerCase(char ch) {

//     if(ch >= 'a' && ch <= 'z') {
//         return ch;
//     } else {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool checkPalindrome(char a[], int n) {
//     int s = 0;
//     int e = n-1;

//     while(s<=e) {
//         if(a[s] != a[e]) {
//             return false;
//         } else {
//             s++;
//             e--;
//         }
//     }
//     return true;
// }

// int getLength(char name[]) {
//     int count = 0;
    
//     for(int i = 0; name[i] != '\0';i++) {
//         count++;
//     }

//     return count;
// }
 
// int main()
// {
//     char name[20];
//     cout << "Enter the value of name: ";
//     cin >> name;
//     cout << "your name is: " << name << endl;

//     int length = getLength(name);

//     cout << "Palindrome or Not: " << checkPalindrome(name, length) << endl;
//     return 0;
// }






//Q: check palindrome removing non-alpha numeric character and discarding upper case.

// #include <iostream>
// using namespace std;

// class Solution {

// private:
//     // To check if the charater is valid or not.
//     bool valid(char ch) {
        
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
//             return 1;
//         }
//         return 0;
//     }
//     // Converting the character into lowerCase.
//     char toLowerCase(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
//             return ch;
//         } else {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }

//     // Checking if the sting is palindrome.
//     bool checkPalindrome(string a) {
//         int s = 0;
//         int e = a.length() -1;

//         while(s<=e) {
//             if(a[s] != a[e]) {
//                 return 0;
//             } else {
//                 s++;
//                 e--;
//             }
//         }
//         return 1;
//     }


// public:
//     bool isPalindrome(string s) {
//         // faltu character hatana hai.

//         //step-1: removing the special character storing in temp
//         //step-2: Analising the temp if there is any upper case charater in the temp.
//         //step-3: sending temp into chekPalindrome function and cheking if the sting is palindrome or not.
//         string temp = "";

//         for(int j = 0; j < s.length(); j++) {
//             if( valid(s[j]) ) {
//                 temp.push_back(s[j]);
//             }
//         }
//         //lower case
//         for(int j = 0; j<temp.length(); j++) {
//             temp[j] = toLowerCase(temp[j]);
//         }

//         return checkPalindrome(temp);
//     }
// };
 
// int main()
// {
    
//     return 0;
// }



/*
  Q:ip -> My name is love
    output -> ym eman si evol

    Approach -> jaise hein space milega -> reverse kar dunga word ko.
                jaise hein  '\0' milega word ko reverse kar dunga.
*/

//HW
/*
    string -> test
    t -> 2
    e -> 1
    s -> 1
    **** -> ignoring the uppercase character.
    maximum t aaya hai iss lye t ko return kar denge.  
*/

// #include <iostream>
// using namespace std;

// char getMaxOccCharacter(string s) {

//     // Storing the count of every character using this array.
//     int arr[26] = {0};


//     //create an array of count of character.
//     for(int i = 0; i < s.length(); i++) {
//         char ch = s[i];

//         int number = 0;
//         if (ch >= 'a' && ch <= 'z') { //lower case.
//             number = ch - 'a';
//         } else { // upper case.
//             number = ch - 'A';
//         }
//         arr[number]++;
//     }
    

//     // Find maximum occ character.
//     int maxi = -1, ans = -1;
//     for(int i = 0; i < 26; i++) {
//         if(maxi < arr[i]) {
//             ans = i;
//             maxi = arr[i];
//         }
//     }

//     char finalAns = 'a' + ans;
//     return finalAns;
// }
 
// int main()
// {
//     string s;
//     cin >> s;

//     cout << getMaxOccCharacter(s) << endl;
//     return 0;
// }

//HW
/*
    about cin.getline -> to use space in input
    how to apply custom delimeter in cin.getline
*/

#include <iostream>
using namespace std;
 
int main()
{
    
    return 0;
}