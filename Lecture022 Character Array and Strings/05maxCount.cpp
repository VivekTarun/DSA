#include <iostream>
using namespace std;

char getMaxXharacter(string s) {
    int arr[25] = {0};

    //create an array of count of characters
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i = 0; i < 25; i++) {
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
    string s = "output";
    char ans = getMaxXharacter(s);

    cout << ans << endl;
    return 0;
}