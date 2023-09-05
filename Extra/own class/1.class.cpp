#include <iostream>
using namespace std;

template <typename t1, typename t2>
class Pair {
public:
    t1 first;
    t2 second;

    Pair() : first(t1()) {
        
        this -> second = t2();
    }

    Pair(t1& first, t2& second) : first(first), second(second) {}
};

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int data) : data(data), left(NULL), right(NULL) {};

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
int main()
{
    Pair<int, char> front;
    front.first = 1;
    front.second = 'a';
    cout << front.first << " " << front.second << endl;

    return 0;
}

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node() {
        this -> data = 0;
        this -> next = NULL;
    }
    node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    node(int data, node* next) {
        this -> data = data;
        this -> next = NULL;
    }
};

class Node {
public:
    int data;
    Node* left;
    Node* right;


    Node() {
        this -> data = 0;
        this -> left = NULL;
        this -> right = NULL;
    }
    Node(int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
    Node(int data, Node* left, Node* right) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};
 
int main() {
    
    
    return 0;
}