#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
    }
};

void insertNode(Node* &tail, int element, int val) {
    //Assume that the element is present in the list.

    if(tail == NULL) {
        Node* newNode = new Node(val);
        tail = newNode;
        newNode -> next = newNode;
    } else {
        Node* curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;
        }

        Node* temp = new Node(val);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}
 
int main()
{
    
    return 0;
}