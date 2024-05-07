#include <iostream>
using namespace std;
// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform a depth-first traversal (in-order) and print the nodes
void printTree(TreeNode* root) {
    if (root != nullptr) {
        cout << root->val << " ";
        printTree(root->left);
        // cout << root->val << " ";
        printTree(root->right);
    }
}

void LevelPrint(TreeNode* root, int& level, int clvl){
    if(root == NULL) return;

    if(clvl == level){
        cout << root->val <<" ";
        return;
    }
    if(root->left != NULL) LevelPrint(root->left, level, clvl+1);


    if(root->right != NULL) LevelPrint(root->right, level, clvl+1);
}

int main() {

    // Creating nodes
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);
    TreeNode* i = new TreeNode(9);

    //connect
    a->left = b;
    a->right = c;
    
    c->left = f;
    c->right = g;
    f->left = i;

    b->left = d;
    b->right = e;
    e->right = h;


    // Print the binary tree
    cout << "Binary Tree Structure (Pre-Order Traversal): ";
    printTree(a);
    cout << endl;
    //....
    cout << "Enter the level you want to print: " ;
    int level;
    cin >> level;
    int clvl = 1;
    LevelPrint(a, level, clvl);

    return 0;
}
