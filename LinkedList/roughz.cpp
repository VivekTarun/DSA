#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "memory free " << endl;
    }
};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtMiddle(Node* &head, Node* tail, int position, int d) {

    if(position == 1) { // Insert at head
    insertAtHead(head, d);
    return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL) {  // Insert at tail
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head) {
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <= position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        delete curr;
    }

}

void print(Node* &head) {
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    
}

int main()
{   
    int *i = new int;
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    //yaha head jo hai wo node1 ko point kar rha hai.
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtMiddle(head, tail, 2, 22);
    print(head);
    return 0;
}

