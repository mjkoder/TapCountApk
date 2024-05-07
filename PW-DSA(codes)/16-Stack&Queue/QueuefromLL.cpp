#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    public:
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Queue{
    public: 
    Node *head, *tail;
    int sz;
    public:
    Queue(){
        head = tail = NULL;
        sz = 0;
    }
    void push(int val){
        Node * temp = new Node(val);
        if(sz == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = tail->next;
        }
        sz++;
    }
    void pop(){
        Node *temp = head;
        head = head->next;
        delete(temp);
        sz--;
    }
    int size(){
        return sz;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    void display(){
        Node * temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl; 
    }
};

int main(){
    Queue q;
    cout << "Enter the size of queue: ";
    int n;
    cin >> n;
    cout << "Enter values: ";
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        q.push(val);
    }
    q.display();
    cout << "Front Element: " << q.front() << endl;
    q.pop();
    cout << "Pop done !!" << endl;
    q.display();
    cout << "Size of queue: " << q.size() <<endl;
}