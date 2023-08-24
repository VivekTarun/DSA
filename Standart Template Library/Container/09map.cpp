#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    /*
        it works as key value pair.
        it's implementation is by using red black tree
        and bst.
        and unordered_map is implemented by hashtable.
    */
    map<int, string> m;

    m[1] = "vivek";
    m[12] = "honey";
    m[2] = "tarun";

    m[5] = "bheem";



    for(auto i : m)
    cout << i.first << " " << i.second << endl;



    return 0;
}