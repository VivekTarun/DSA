#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int data ) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if( this -> next == NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtTail(Node* &tail, int d) {
    //new node create. 
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}


// yaha pe head mein reference iss leye leya hai kyun ki copy nhi banana chahte hain 
// taki original LL mein hein change ho jaye sab.
void insertAtHead(Node* &head, int d) {
    // new node create.
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtPosition( Node* &tail, Node* &head, int position, int d) {

    if(position == 1) {
        insertAtHead(head, d);
        return;
    }


    Node* temp = head;
    int cnt = 1;
    

    while(cnt < position - 1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    //creating a node for d.
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

void deletenode(int position, Node* &head) {
    //deleting first or start node.
    if(position == 1) {
        Node* temp = hva        head = head -> next;
        //memory free karna hoga | head ke dwara allocate keya tha iss leye distructer se free karwana hoga.
        temp -> next = NULL;
        delete temp;
    } else {
        //deleting any middle node or last nodce.
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while( cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{ 
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // cout << (*node1).data;
    // cout << node1 -> data;

    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 11);
    print(head);

    // insertAtPosition(head, 3, 22);
    print(head);

    insertAtPosition(tail, head, 3, 44);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;


    deletenode( 1, head);
    print(head);

    // insertAtTail(head, 12);
    // print(head);
     // what is the same thign
    return 0;
}