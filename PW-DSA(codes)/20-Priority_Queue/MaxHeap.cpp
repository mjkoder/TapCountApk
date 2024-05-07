#include <iostream>
using namespace std;

class maxHeap{
    public:
    int hp[100];
    int sz;

    maxHeap(){
        hp[0] = 0;
        sz = 0;
    }

    void upheapify(int idx){
        int parent;
        while(idx > 1){
            if(idx % 2 == 0 ) parent = idx / 2;
            else parent = (idx - 1) / 2;

            if(hp[idx] > hp[parent]){
                swap(hp[idx], hp[parent]);
                idx = parent;
            }
            else return; 
        }
    }

    void downheapify(){
        int root = 1;
        while(root < sz -1){
            int left = 2*root;
            int right = left + 1;

            if((hp[root] < hp[left] && left <= sz) || (hp[root] < hp[right] && right <= sz)){
                if(hp[left] > hp[right]){
                    swap(hp[left], hp[root]);
                    root = left;
                }
                else{
                    swap(hp[root], hp[right]);
                    root = right;
                }
            }
            else return;
        }
    }

    void insert(int val){
        sz = sz  + 1;
        int index = sz;
        hp[index] = val;
        upheapify(index);
    }

    int size(){
        return sz;
    }

    void remove(){
        swap(hp[1], hp[sz]);
        sz = sz - 1;
        downheapify();
    }

    void display(){
        for(int i = 1; i <= sz; i++){
            cout << hp[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    maxHeap mhp;
    mhp.insert(10);
    mhp.insert(-5);
    mhp.insert(15);
    mhp.insert(50);
    mhp.insert(0);

    mhp.display();

    mhp.remove();
    mhp.display();

}