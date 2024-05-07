// Display Stack using Recursion
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
//Reverse
void DisplayReverse(stack<int> st){
    if(st.empty()) return;
    cout << st.top() << " ";
    st.pop();
    DisplayReverse(st);
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
    Display(st);
    cout << endl;
    DisplayReverse(st);
}