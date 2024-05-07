//Revere Stack using reursion
#include <iostream>
#include <stack>
using namespace std;

//Forward
void Display(stack<int> st){
    if(st.size() == 0) return;
    int topele = st.top();
    st.pop();
    Display(st);
    cout << topele <<" ";
    return;
}
void InsertAtBottom(stack<int>& st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    InsertAtBottom(st,val);
    st.push(x);
}
//Reverse
void Reverse(stack<int>& st){
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    Reverse(st);
    InsertAtBottom(st,x);
}
int main(){
    cout << "Enter the size of stack: "<<endl;
    int n;
    cin>>n;
    cout << "Enter values of stack : "<< endl;
    stack<int> st;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        st.push(val);
    }
    Reverse(st);
    cout << "After Reverse: " << endl;
    Display(st);
}