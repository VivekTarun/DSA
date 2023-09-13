#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    char ans;
    if(ch >= 'A' && ch <= 'Z') {
        ans = 'a' + (ch - 'A');
        return ans;
    } else {
        return ch;
    }
    
}
 
int main() {
    
    string s1 = "Listen";
    string s2 = "Silent";

    string absS1 = "";
    for(int i = 0; i < s1.size(); i++) {
        absS1.push_back(toLowerCase(s1[i]));
    }
    string absS2 = "";
    for(int i = 0; i < s1.size(); i++) {
        absS2.push_back(toLowerCase(s2[i]));
    }

    cout << absS1 << " " << absS2 << endl;
    sort(absS1.begin(), absS1.end());
    sort(absS2.begin(), absS2.end());
    if(absS1 == absS2) cout << "yes" << endl;
    else cout << "No" << endl;

    return 0;
}