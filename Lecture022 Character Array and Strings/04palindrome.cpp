#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z')
    return ch;
    else {
        char temp = ch - 'A' - 'a';
        return temp;
    }

}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        if(a[s] != a[e])
        return 0;
        else {
            s++;
            e--;
        }
        return 1;
    }
}

int getLength(char name[]) {
    int count = 0;
    for ( int i = 0; name[i] != '\0' ; i++) {
        count++;
    }

    return count;
}
 
int main()
{
    char name[20] = "vivek";
    int lenght = getLength(name);

    if(checkPalindrome(name, lenght))
    cout << "yes palindrome" << endl;
    else
    cout << "not palindrome" << endl;
    return 0;
}