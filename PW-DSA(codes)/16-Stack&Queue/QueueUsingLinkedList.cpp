#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node *head;
    Node *tail;
    int sz;

    LinkedList() {
        head = tail = NULL;
        sz = 0;
    }

    void push(Node *a) {
        if (!head) {
            head = tail = a;
        } else {
            tail->next = a;
            tail = a;
        }
        sz++;
    }

    int front(){
        return head->val;
    }

    void pop() {
        if (head) {
            head = head->next;
            sz--;
        }
    }

    int size() {
        return sz;
    }

    void display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

class Queue {
public:
    LinkedList ll;

    Queue() : ll() {}

    int size() {
        return ll.size();
    }

    void push(int val) {
        Node *n = new Node(val);
        ll.push(n);
    }

    void pop() {
        ll.pop();
    }

    int front(){
        ll.front();
    }

    void display() {
        ll.display();
        cout << endl;
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    cout << "Size: " << q.size() << endl;
    q.pop();
    q.display();
    cout << q.front() << endl;
    return 0;
}
