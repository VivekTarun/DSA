/*
while printing head is given in the argument because printing is done from first node and it is displayed from (top-left) to
(top-right). 
1.Inserting at Head.
2.Inserting at Tail.
3.Inserting at Middle.
    EXCEPTIONAL CASE:
    I. 1st position is exceptional case.
    II. last position mein if dalenge tooh tail update nhi hoga uusko karna padega update.
    **. In both exceptional case we are calling.
        1.insertAtHead() function.
        2.insertAtTail() function.
4.Deletion of Link List.   
    CASES: (deletion of)
    I. first node. (This is a bit exceptional because "yaha pe koi previous jaisa kuch nhi hota")
    II. middle node.
    III. last node.
*/
/*
    HW HW HW HW HW HW
    LAST NODE DELETE KARNE PAR TAIL KO KAISE HANDLE KARTE HAIN.
*/
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL; 
    }

    //destructor
   ~Node() {
        int value = this -> data;
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
//------------------------------------------------------------

void insertAtHead(Node* &head, int d) {
   //inserting at head.
   Node* temp = new Node(d);
   temp -> next = head;
   head = temp; 
} 

void insertAtTail(Node* &tail, int d) {
    //inserting at tail.
    Node* temp = new Node(d);
    tail -> next = temp; 
    tail = tail -> next;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    // If we have to triverse nth position then we have to go till (n-1)th node.

    // when we have to insert at first position.
    //position is provided  by user.
    if(position == 1) {
        insertAtHead(head, d);
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1) {
        temp = temp -> next;
        cnt++; 
    }

    //inserting at last position 
    if(temp -> next == NULL) {
        insertAtTail(tail, d);
    }

    //createing a node for d.
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert; 
}

//-------------------------------------------------------------
void print(Node* &printinghHead, Node* &printingTail) {
    Node* temp = printinghHead;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    cout <<"head -> " << printinghHead -> data<< " ";
    cout << "tail -> " << printingTail -> data << " ";
    cout << endl;
};

void deleteNode(int position, Node* &head) {
    
    if(position == 1) {  
        //first Node.
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else { 
        //middle Node | last Node.
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL; 
        delete curr;

    }
}

int main() {

    //created a new node.
    
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //head pinted to node1
    Node* head = node1;
    Node* tail = node1;


    print(head,tail); // head -> head is used printing will be done from first node. 

    insertAtTail(tail, 12);
    print(head, tail);

    insertAtTail(tail, 15);
    print(head, tail);

    insertAtPosition(tail, head, 3, 22);
    print(head, tail);

    deleteNode(1, head); 
    return 0;
}