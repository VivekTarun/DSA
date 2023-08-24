#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
class node {
public:

    int data;
    node* left;
    node* right;

    node(int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node*& root) {
    int data;
    cout << "Enter the data: ";
    cin >> data;
    root = new node(data);


    if(data == -1)
    return NULL;

    cout << "Enter the left data of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter the right data of " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}

void inOder(node* root) {

    if(root == NULL) {
        cout << "No data";
        return;
    }
    

    inOder(root -> left);
    cout << root -> data << " ";
    inOder(root -> right);

}

void preOreder(node* root) {
    if(root == NULL)
    return;

    cout << root -> data << " ";
    preOreder(root -> left);
    preOreder(root -> right);
}

void postOder(node* root ) {
    if(root == NULL)
    return;

    postOder(root -> left);
    postOder(root -> right);
    cout << root -> data << " ";
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp -> data << " ";
            if(temp -> left)
            q.push(temp -> left);
            if(temp -> right)
            q.push(temp -> right);
        }
        
    }
}

int main()
{   
    node* root = NULL;
    buildTree(root);
    levelOrderTraversal(root);
    // 5 4 2 -1 -1 1 -1 -1 3 12 -1 -1 17 -1 -1
    
    return 0;
}