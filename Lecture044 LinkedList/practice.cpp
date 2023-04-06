// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node (int data ) {
//         this -> data = data;
//         this -> next = NULL;
//     }

//     ~Node() {
//         int value = this -> data;
//         if( this -> next == NULL) {
//             delete next;
//             this -> next = NULL;
//         }
//         cout << "memory is free for node with data " << value << endl;
//     }
// };

// void insertAtTail(Node* &tail, int d) {
//     //new node create. 
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = tail -> next;
// }


// // yaha pe head mein reference iss leye leya hai kyun ki copy nhi banana chahte hain 
// // taki original LL mein hein change ho jaye sab.
// void insertAtHead(Node* &head, int d) {
//     // new node create.
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }

// void insertAtPosition( Node* &tail, Node* &head, int position, int d) {

//     if(position == 1) {
//         insertAtHead(head, d);
//         return;
//     }


//     Node* temp = head;
//     int cnt = 1;
    

//     while(cnt < position - 1) {
//         temp = temp -> next;
//         cnt++;
//     }

//     if(temp -> next == NULL) {
//         insertAtTail(tail, d);
//         return;
//     }

//     //creating a node for d.
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert -> next = temp -> next;
//     temp -> next = nodeToInsert;
// }

// void print(Node* &head) {
//     Node* temp = head;
//     while(temp != NULL) {
//         cout << temp -> data << " " ;
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// void deletenode(int position, Node* &head) {
//     //deleting first or start node.
//     if(position == 1) {
//         Node* temp = head -> next;
//         //memory free karna hoga | head ke dwara allocate keya tha iss leye distructer se free karwana hoga.
//         temp -> next = NULL;
//         delete temp;
//     } else {
//         //deleting any middle node or last nodce.
//         Node* curr = head;
//         Node* prev = NULL;
//         int cnt = 1;
//         while( cnt < position) {
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
// }

// int main()
// { 
//     Node* node1 = new Node(10);
//     cout << node1 -> data << endl;
//     cout << node1 -> next << endl;

//     // cout << (*node1).data;
//     // cout << node1 -> data;

//     Node* head = node1;
//     Node* tail = node1;
//     print(head);
//     insertAtHead(head, 12);
//     print(head);

//     insertAtHead(head, 15);
//     print(head);

//     insertAtTail(tail, 11);
//     print(head);

//     // insertAtPosition(head, 3, 22);
//     print(head);

//     insertAtPosition(tail, head, 3, 44);
//     print(head);

//     cout << "head " << head -> data << endl;
//     cout << "tail " << tail -> data << endl;


//     deletenode( 1, head);
//     print(head);

//     // insertAtTail(head, 12);
//     // print(head);
//      // what is the same thign
//     return 0;
// }





//Doubly link-list.

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d) {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }

};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* head) {
    int length = 0;
    Node* temp = head;

    while(temp != NULL) {
        length++;
        temp = temp -> next;
    }
    return length;
}

void insertAtHead(Node* &head, int d) {
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
    } else {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
}
    }
    

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail =  temp; 
}

void insertAtposition(Node* &tail, Node* &head, int position, int d) {
    //insert at start.
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position -1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    //creating a new node for d
    Node* nodeToinsert = new Node(d);

    nodeToinsert -> next = temp -> next;
    temp -> next -> prev = nodeToinsert;
    nodeToinsert -> prev = temp;
    temp -> next = nodeToinsert;

}

void deleteNode(int position, Node* &head) {
    //deleting first or start node.
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}
  
int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head, 11);
    print(head);


    insertAtHead(head, 14);
    print(head);

    insertAtHead(head, 15);
    print(head);
    
    insertAtTail(tail, 144);
    print(head);

    insertAtposition(tail, head, 2, 444);
    print(head);

    insertAtposition(tail, head, 5, 764);
    print(head);

    return 0;
}