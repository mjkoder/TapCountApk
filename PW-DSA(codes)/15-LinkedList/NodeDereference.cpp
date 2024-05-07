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
int main(){
    Node a(10),b(20),c(30),d(40);
    a.next = &b; 
    b.next = &c;
    c.next = &d;
    cout << (*((*((*(a.next)).next)).next)).val <<endl;
    //De-reference Method

    //Accessing value at d using pointer of a.
    //a.next -> address of b ==> *(a.next) = b

    //b.next -> address of c ==> *(b.next) = c
    //(*(a.next)).next -> address of c ==> *((*(a.next)).next) = c

    //c.next -> address of d ==> *(c.next) = d
    //(*((*(a.next)).next)).next -> address of d ==> *((*((*(a.next)).next)).next) = d

    cout << (((a.next)->next)->next)->val <<endl;

    Node temp = a;
    while(1){ //Infinite loop
        cout << temp.val << " " ;
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
    cout << endl;
}