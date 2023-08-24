#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(18);
    v.push_back(0);
    binary_search(v.begin(), v.end(), 1) ? cout << "found" : cout << "not found";
    cout <<endl;

    cout << "lower bound -> " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 4)-v.begin() << endl;

    int a = 3;
    int b = 5;

    swap(a,b);
    min(a, b);
    max(a,b);

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String -> " << abcd << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "After rotate" << endl;
    for(int i:v) {
        cout << i << " ";
    }
    return 0;
}