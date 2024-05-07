#include <iostream>
using namespace std;

class Queue {
    int f, r;
    int capacity;
    int* arr;

public:
    Queue(int sz) {
        f = r = 0;
        capacity = sz;
        arr = new int[capacity];
    }

    ~Queue() {
        delete[] arr;
    }

    void push(int val) {
        arr[r] = val;
        r++;
    }

    int front() {
        f++;
        return arr[f - 1];
    }

    int back() {
        return arr[r - 1];
    }

    int size() {
        return (r - f);
    }

    void display() {
        for (int i = f; i < r; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int sz;
    cout << "Enter the size of queue: " ;
    cin >> sz;
    Queue q(sz);
    cout << "Enter Elements: ";
    for(int i = 0; i < sz ; i++){
        int num;
        cin >> num;
        q.push(num);
    }
    cout << q.back() << endl;
    q.display();
    return 0;
}
