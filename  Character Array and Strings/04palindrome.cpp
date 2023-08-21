#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z')
    return ch;
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }

}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        if( toLowerCase(a[s]) != toLowerCase(a[e]) )
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

char getMaxOccCharacter(string s) {
    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        } else {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}
 
int main()
{
    char name[20] = "Noon";
    // int lenght = getLength(name);

    // if(checkPalindrome(name, lenght))
    // cout << "yes palindrome" << endl;
    // else
    // cout << "not palindrome" << endl;
    // return 0;

    char letter = getMaxOccCharacter(name);

    cout << letter << endl;
}