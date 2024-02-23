/*
2. Problem: Binary Search Tree (BST) Implementation

Problem Statement:
Implement a binary search tree (BST) data structure along with insertion and search operations.

Input:
Commands to insert and search elements in the BST.

Output:
Results of insertion and search operations.

Example:
Input:
Insert: 5, 3, 8, 2, 7
Search: 3, 6
Output:
Inserted: 5, 3, 8, 2, 7
Found: 3
Not Found: 6
*/
#include <iostream>

using namespace std;

// Definition of a node in BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Insertion operation in BST
void insert(Node*& root, int val) {
    if (root == nullptr) {
        root = new Node(val);
        cout << "Inserted: " << val << endl;
        return;
    }

    if (val < root->data) {
        insert(root->left, val);
    } else if (val > root->data) {
        insert(root->right, val);
    }
}

// Search operation in BST
bool search(Node* root, int val) {
    if (root == nullptr) {
        return false;
    }

    if (root->data == val) {
        return true;
    } else if (val < root->data) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

int main() {
    Node* root = nullptr;

    // Insertion
    insert(root, 5);
    insert(root, 3);
    insert(root, 8);
    insert(root, 2);
    insert(root, 7);

    // Search
    cout << "Found: ";
    if (search(root, 3)) {
        cout << "3" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    cout << "Found: ";
    if (search(root, 6)) {
        cout << "6" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
