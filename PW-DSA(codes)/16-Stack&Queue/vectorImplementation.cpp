/*Create a stack class using vector and provide all functionality
as a normal Stack have*/
#include <iostream>
#include <vector>
using namespace std;
class Stack{
    public:
    //int idx;
    vector<int> vec;
    // Stack(){
    //     idx = -1;
    // }
    void push(int val){
        vec.emplace_back(val);
    }
    void pop(){
        if(vec.size() == 0){
            cout << "Empty stack !"<<endl;
            return;
        }
        vec.pop_back();
    }
    int sized()
    {
        return vec.size();
    }
    int top(){
        return vec.back();
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.sized() << endl;
    cout << st.top() << endl;
}