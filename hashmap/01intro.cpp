#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    //creation
    unordered_map<string, int> m;

    //insertion

    //1
    pair<string, int> p = make_pair("vivek", 3);
    m.insert(p);

    //2
    pair<string, int> p2("tarun", 2);
    m.insert(p2);

    m["mera"] = 1; // paheli baar insertion karne se data addition hota hai.
    m["mera"] = 2; // Dushri baar data assign karne se value modification hota hai.



    //search
    cout << m["mera"] << endl;
    cout << m.at("vivek") << endl;

    cout << m["unknownKey"] << endl; // --> if key present nhi hogi tooh data map assign karega hai 0 return kar dega ans mein. khud se value bana ke 0 return kar dega. entry ban jati hai khud se.
    cout << m.at("unknownKey") << endl; // -> yaha pe if value assign nhi hogi tooh error return karega.

    //size
    cout << m.size() << endl;

    //to check prefsence
    cout << m.count("bro") << endl;


    //erase
    m.erase("vivek");
    cout << m.size() << endl;  // erase karne ke baad if pahele size 4 thi tooh aab 3 ho jayi gi.


    //iterate using for-each loop
    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }


    // using iterator.
    unordered_map<string, int> :: iterator it = m.begin(); 
    while(it != m.end()) {
        cout << it -> first << " " << it -> second << endl;
        it++;
    }
    /*
        if we use unordered_map -> complexity will be O(1) and and data will not occur in same order in which we have entered the data. unordered map is based on hash table.
        if we use map -> complexity will be O(n) and data will occure in same order in which we have entered the data. ordered map is based on BST
    */


    return 0;
}