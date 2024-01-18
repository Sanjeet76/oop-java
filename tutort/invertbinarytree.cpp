#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;           // The value of the node
    TreeNode* left;   // Pointer to the left child node
    TreeNode* right;        // Pointer to the right child node
    TreeNode(int x) {   //constructor
        val=x; 
        left=nullptr;
        right=nullptr;
        }
};

// Function to invert a binary tree
TreeNode* invertTree(TreeNode* root) {
    // If the tree is empty or has only one node, return the root.
    if (root == nullptr || (root->left == nullptr && root->right == nullptr)) {
        return root;
    }

    // Swap the left and right subtrees of the current node
    TreeNode* temp = root->left;   // Store a temporary pointer to the left subtree
    root->left = root->right;      // Make the left subtree pointer point to the right subtree
    root->right = temp;            // Make the right subtree pointer point to the temporary left subtree

    // Recursively invert the left and right subtrees
    invertTree(root->left);        // Invert the left subtree
    invertTree(root->right);       // Invert the right subtree

    return root;     // Return the root of the inverted tree
}

// Function to print the binary tree level by level (used for testing)
void printLevelOrder(TreeNode* root) {
    if (root == nullptr) {
        return;  // If the tree is empty, nothing to print
    }

    queue<TreeNode*> q;  // Create a queue to perform level-order traversal
    q.push(root);            // Push the root node into the queue

    while (!q.empty()) {      // Continue until the queue is empty (all levels are printed)
        int levelSize = q.size();  // Get the number of nodes at this level

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* current = q.front();  // Get the front node from the queue
            q.pop();                        // Remove the front node from the queue
            cout << current->val << " "; // Print the value of the current node

            if (current->left != nullptr) {
                q.push(current->left);  // Push the left child into the queue if it exists
            }

            if (current->right != nullptr) {
                q.push(current->right); // Push the right child into the queue if it exists
            }
        }

        cout << endl; // Move to the next level 
    }
}

// Function to build a binary tree based on user input
TreeNode* buildTree() {
    int val;
    cout << "Enter the root value: ";
    cin >> val;
    TreeNode* root = new TreeNode(val);  // Create the root node with the given value

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front(); // Get the front node from the queue
        q.pop();

        int leftVal, rightVal;
        cout << "Enter left child value for " << current->val << " (-1 for no left child): ";
        cin >> leftVal;

        if (leftVal != -1) {
            current->left = new TreeNode(leftVal); // Create and link the left child if it exists
            q.push(current->left); // Push the left child into the queue for further processing
        }

        cout << "Enter right child value for " << current->val << " (-1 for no right child): ";
        cin >> rightVal;

        if (rightVal != -1) {
            current->right = new TreeNode(rightVal); // Create and link the right child if it exists
            q.push(current->right); // Push the right child into the queue for further processing
        }
    }

    return root; 
}

int main() {
  
    TreeNode* root = buildTree();  // Build the binary tree based on user input
    cout << "Original tree:" << endl;
    printLevelOrder(root);

    // Invert the tree
    TreeNode* invertedRoot = invertTree(root);

    cout << "\nInverted tree:" << endl;
    printLevelOrder(invertedRoot);

    return 0; 
}
