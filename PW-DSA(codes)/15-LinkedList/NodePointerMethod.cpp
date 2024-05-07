#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head){
    if(head == NULL) return;
    cout << head->val <<" ";
    display(head -> next);
    cout<<endl;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    
    //Assigning address of nodes
    a->next = b;
    b->next = c;
    c->next = d;

    //Printing whole node value
    Node *temp = a;
    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout<<endl;

    //Accesing d value using a
    cout << a->next->next->next-> val <<endl;

    //Calling Display Function
    display(a);
}