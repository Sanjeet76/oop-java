#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) { 
        val = x;
        left = NULL; 
        right = NULL; 
    }
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Check if either p or q is NULL, or if the current node is NULL.
        if (!root || !p || !q) {
            return NULL;
        }

        // If both p and q are smaller than the current node's value,
        // the LCA must be in the left subtree.
        if (p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }

        // If both p and q are greater than the current node's value,
        // the LCA must be in the right subtree.
        if (p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        }

        // If one value is smaller and the other is greater,
        // or if one of the values matches the current node's value,
        // then the current node is the LCA.
        return root;
    }
};

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
    Solution solution;

    TreeNode* root = buildTree();

    int val1, val2;
    cout << "Enter the values of the two nodes to find their lowest common ancestor: ";
    cin >> val1 >> val2;

    TreeNode* p = new TreeNode(val1);
    TreeNode* q = new TreeNode(val2);

    TreeNode* lca = solution.lowestCommonAncestor(root, p, q);

    if (lca) {
        cout << "Lowest Common Ancestor: " << lca->val << endl;
    } else {
        cout << "No common ancestor found." << endl;
    }

    return 0;
}
