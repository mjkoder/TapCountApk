/*Push any element at any index of a stack*/

#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> temp){
    stack<int> x;
    while(temp.size()){
        x.push(temp.top());
        temp.pop();
    }
    while(x.size()){
        cout<<x.top()<<" ";
        x.pop();
    }
    cout<<endl;
}
stack<int> reverse(stack<int> temp){
    stack<int> ans;
    while(temp.size()){
        ans.push(temp.top());
        temp.pop();
    }
    return ans;
}
stack<int> copy(stack<int> temp){
    stack<int> x,y;
    while(temp.size()){
        x.push(temp.top());
        temp.pop();
    }
    while(x.size()){
        y.push(x.top());
        x.pop();
    }
    return y;
}
int main(){
    stack<int> st;
    //Input 5 values in stack st
    cout << "Enter values to push: ";
    for(int i = 0; i < 5; i++){
        int val;
        cin>>val;
        st.push(val);
    }
    cout << "Stack st print: "<<endl;
    print(st);

    //create another stack which will store in reverse order
    stack<int> ans = copy(st);
    cout << "Copied Stack Print: "<<endl;
    print(st);

    ans = reverse(ans);
    cout<< "After reversed Print: "<<endl;
    print(ans);
}