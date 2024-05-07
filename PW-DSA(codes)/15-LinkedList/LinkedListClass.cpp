#include <bits/stdc++.h>
using namespace std;

class Node{ //User Defined DataType
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{ //User Defined Data Structure
public:
    Node *head, *tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->val <<" ";
            temp = temp->next;
        }
        cout <<endl;
    }
    void insertAtTail(int value){
        Node *temp = new Node(value); //create a node first
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp; //tail ka address = address of temp node
            tail = temp;  // tail ka value me value of temp node
        }
        size++;
    }
    void insertAtIndex(int index,int value){
        if(index < 0 || index > size) cout << "Invalid Index !!"<< endl;
        else if(index == 0) insertAtHead(value);
        else if(index == size) insertAtTail(value);
        else{
            int i = 0;
            Node *temp = new Node(value);
            Node *address = head; //to store the address of (index - 1) index
            while(i < index-1){ //Here Be careful
                address = address->next;
                i++;
            }
            temp->next = address->next; //temp ka address me address th
            address->next = temp; //(index -1 me jo elment he uska address pe temp ka address assign kar diya)
            size++;
        }
    }
    int getAtIndex(int idx){
        if(idx <0 || idx >= size) 
        {
            cout <<"Invalid Index !! ";
            return idx;
        }
        int val;
        Node *start = head;
        for(int i = 0;i <= idx; i++){
            val = start->val;
            start = start->next; 
        }
        return val;
    }
    void insertAtHead(int value){
        Node *temp = new Node(value);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void deleteAtHead(){
        if(size <= 0) cout <<"List is empty !!"<<endl;
        else{
            head = head->next;
            size--;
        }
    }
    void deleteAtTail(){
        Node *temp = head;
        while(temp->next != tail) temp = temp->next;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int idx){
        if(idx < 0 || idx >= size){
            cout << "Invalid Index (NO Delete)!!"<< endl;
        } 
        else if(idx == 0) deleteAtHead();
        else if(idx == size-1) deleteAtTail();
        else{
            Node *temp = head;
            int i = 1;
            while(i < idx){
                temp = temp->next;
                i++;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void length(){
        cout << size << endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);

    ll.display();
    ll.length();

    ll.insertAtHead(5);
    ll.insertAtIndex(2,60);
    ll.insertAtIndex(0,2);
    ll.display();
    ll.length();

    cout << ll.getAtIndex(2)<<endl;
    cout << ll.getAtIndex(6)<<endl;

    ll.deleteAtIndex(2);
    //ll.deleteAtTail();
    ll.display();
    ll.length();

}