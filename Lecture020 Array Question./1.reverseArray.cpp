#include <vector>
#include <iostream>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0, e = v.size() - 1;
    while(s <= e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;

}

void print(vector<int> s) {

    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;
}
 
int main() {

    vector<int> v;

    v.push_back(11);
    v.push_back(3);
    v.push_back(14);
    v.push_back(15);
    v.push_back(18);
    v.push_back(11);
    

    vector<int> ans = reverse(v);
    cout << "Printing reverse Array" << endl;
    print(ans);

    
    return 0;
}