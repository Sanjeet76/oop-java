#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }

private:
    int height(TreeNode *node) {
        if (!node) return 0;
        int lh = height(node->left);
        if (lh == -1) return -1;
        int rh = height(node->right);
        if (rh == -1) return -1;
        if (abs(lh - rh) > 1) return -1;
        return max(lh, rh) + 1;
    }
};

// Function to create a binary tree from user input
TreeNode* createTree() {
    int val;
    cout << "Enter root value: ";
    cin >> val;
    if (val == -1) {
        return NULL;
    }
    
    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        
        int leftVal, rightVal;
        cout << "Enter left child value for " << current->val << " (-1 for no left child): ";
        cin >> leftVal;
        if (leftVal != -1) {
            current->left = new TreeNode(leftVal);
            q.push(current->left);
        }
        
        cout << "Enter right child value for " << current->val << " (-1 for no right child): ";
        cin >> rightVal;
        if (rightVal != -1) {
            current->right = new TreeNode(rightVal);
            q.push(current->right);
        }
    }
    
    return root;
}

int main() {
    TreeNode* root = createTree();
    
    Solution solution;
    if (solution.isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    // Clean up memory (if needed)
    // You can define a function to delete the tree nodes.
    
    return 0;
}
