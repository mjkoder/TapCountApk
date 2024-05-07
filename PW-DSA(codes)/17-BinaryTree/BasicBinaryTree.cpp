#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int level(Node* root){
    if(root == NULL) return 0;
    int leftl = 0, rightl = 0;
    leftl += level(root->left);
    rightl += level(root->right);
    return 1+max(leftl, rightl);
}
int length(Node* root){
    if(root == NULL) return 0;
    int len = 0;
    len += length(root->left);
    len += length(root->right);
    return len + 1;
}

int sumi(Node* root){
    if(root == NULL) return 0;
    int leftsum = sumi(root->left);
    int rightsum = sumi(root->right);
    return root->val + leftsum + rightsum;
}
int maxi(Node* root){
    if(root->left == NULL ) return root->val;
    return max(root->val,max(maxi(root->left), maxi(root->right)));
}
void display(Node* root){

    if(root == NULL) return;

    cout << root->val << " ";

    display(root->left);
    display(root->right);
    
}
int main(){
    Node* a = new Node(1); //root tree node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    Node* i = new Node(9);

    a->left = b;
    a->right = c;
    
    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;

    e->left = h;
    e->right = i;

    display(a);
    cout << endl;
    cout <<"Size of Binary Tree: "<< length(a) << endl;
    cout << "Sum of Binary Tree: " << sumi(a) << endl;
    cout << "Maximum of Binary Tree: " << maxi(a) << endl;
    cout << "Level of Tree: " << level(a) << endl;
}