#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node (int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
    }
}

void inorder(node* root) {
    //base case.
    if(root == NULL) {
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";

}

node* buildFromLevelOrder(node* &root) {
    queue<node*> q;
    cout << "Enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp -> data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        } 

        cout << "Enter right node for: " << temp -> data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> left = new node(rightData);
            q.push(temp -> left);
        } 

    }
}

int main()
{
    node* root = NULL;

    buildFromLevelOrder(root);
    
    //creating a tree
    root = buildTree(root);
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1



    // //level order
    // cout << "Printing the level order traversal output " << endl;
    // levelOrderTraversal(root);

    // cout << "inorder traversal is: ";
    // inorder(root);
    // cout << endl;
    // cout << "preorder traversal is: ";
    // preorder(root);
    // cout << endl;
    // cout << "postorder traversal is: ";
    // postorder(root);



    return 0;
}