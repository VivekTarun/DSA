/*
    we need not to use head node.
    By using tail node only we can access head : "tail -> next == head"
*/
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int d) {
        this -> data = d;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if (this -> next != NULL) {
            delete next;
            next = NULL;
        }
         cout << "memory free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d) {
    
    //empty list.
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else {
        //non-empty list.
        //assuming that the element is present in the list.

        Node* curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;
        }

        // element found -> curr is representing element wala node. 
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

void print(Node* tail) {

    Node* temp = tail;
    // cout << tail -> data << " ";
    
    // while(tail -> next != temp) {
    //     cout << tail -> data << " ";
    //     tail = tail -> next;
    //  }
    //  cout << " ";

    // do while loop ki khas baat ye hain ki condition false ho taab bhi ek baar tooh exicute hona hein hai.


    //empty link list.
    if(tail == NULL) {
        cout << "list is empty. " << endl;
        return;
    }
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;
}

void deleteNode(Node* &tail, int value) {
    //empty list
    if(tail ==NULL) {
        cout << "list is empty, please check again " << endl;
        return;
    }
    else {
        //non-empty.
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;

        // 1 node linklist
        if(curr == prev) {
            tail = NULL; 
        }

        // >2 node ki link-list
        else if(tail ==curr) {
            tail = prev;
         }
        curr -> next = NULL;
        delete curr;     
    }
}
 
int main()
{   
    Node* tail = NULL;
    
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);
    
    return 0;
}