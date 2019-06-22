// C++ program to count number of Binary search trees 
// in a given Binary Tree 
#include <bits/stdc++.h> 
using namespace std; 
  
// Binary tree node 
struct Node { 
    struct Node* left; 
    struct Node* right; 
    int data; 
  
    Node(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
}; 
  
// Information stored in every 
// node during bottom up traversal 
struct Info { 
  
    // Stores the number of BSTs present 
    int num_BST; 
  
    // Max Value in the subtree 
    int max; 
  
    // Min value in the subtree 
    int min; 
  
    // If subtree is BST 
    bool isBST; 
}; 
  
// Returns information about subtree such as 
// number of BST's it has 
Info NumberOfBST(struct Node* root) 
{ 
    // Base case 
    if (root == NULL) 
        return { 0, INT_MIN, INT_MAX, true }; 
  
    // If leaf node then return from function and store 
    // information about the leaf node 
    if (root->left == NULL && root->right == NULL) 
        return { 1, root->data, root->data, true }; 
  
    // Store information about the left subtree 
    Info L = NumberOfBST(root->left); 
  
    // Store information about the right subtree 
    Info R = NumberOfBST(root->right); 
  
    // Create a node that has to be returned 
    Info bst; 
    bst.min = min(root->data, (min(L.min, R.min))); 
    bst.max = max(root->data, (max(L.max, R.max))); 
  
    // If whole tree rooted under the 
    // current root is BST 
    if (L.isBST && R.isBST && root->data > L.max && root->data < R.min) { 
  
        // Update the number of BSTs 
        bst.isBST = true; 
        bst.num_BST = 1 + L.num_BST + R.num_BST; 
    } 
  
    // If the whole tree is not a BST, 
    // update the number of BSTs 
    else { 
        bst.isBST = false; 
        bst.num_BST = L.num_BST + R.num_BST; 
    } 
  
    return bst; 
} 
  
// Driver code 
int main() 
{ 
    struct Node* root = new Node(5); 
    root->left = new Node(9); 
    root->right = new Node(3); 
    root->left->left = new Node(6); 
    root->right->right = new Node(4); 
    root->left->left->left = new Node(8); 
    root->left->left->right = new Node(7); 
  
    cout << NumberOfBST(root).num_BST; 
  
    return 0; 
}