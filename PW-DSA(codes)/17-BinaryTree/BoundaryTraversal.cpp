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

void display(Node* root){

    if(root == NULL) return;

    cout << root->val << " ";

    display(root->left);
    display(root->right);
    
}
void LeftBoundary(Node* root){
    if(root == NULL ) return;
    if(root->left == NULL && root->right == NULL) return;
    cout << root->val << " ";
    if(root->left) LeftBoundary(root->left);
    else LeftBoundary(root->right);
}
void LeafBoundary(Node* root){
    if(root == NULL ) return;
    if(root->left == NULL && root->right == NULL){
            cout << root->val << " ";
    } 
    LeafBoundary(root->left);
    LeafBoundary(root->right);
}
void RightBoundary(Node* root){
    if(!root) return;
    if(!root->left && !root->right) return;
    if(root->right) RightBoundary(root->right);
    else RightBoundary(root->left);
    cout << root->val << " ";
}
void BoundaryPrint(Node* root){
    LeftBoundary(root);
    LeafBoundary(root);
    RightBoundary(root->right);
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
    
    cout << "Boundary Elements: ";
    BoundaryPrint(a);
}
