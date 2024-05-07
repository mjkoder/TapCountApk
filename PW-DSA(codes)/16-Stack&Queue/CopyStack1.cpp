/*Copy Stack in another Stack in same order*/
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
stack<int> Add(stack<int> temp,int val,int index){
    if(index < 0) {
        cout << "Wrong Index !!" <<endl;
        return temp;
    }
    stack<int> x;
    int sz = 0;
    while(temp.size()){
        x.push(temp.top());
        sz++;
        temp.pop();
    }
    int i = 0;
    while(x.size()){
        if(i == index) temp.push(val);
        temp.push(x.top());
        i++;
        x.pop();
    }
    if(sz < index) cout << "Wrong Index !!" << endl;
    return temp;
}
int main(){
    stack<int> st;
    //Input 5 values in stack st
    cout << "Enter size of stack: "<<endl;
    int sz;
    cin >>sz;
    cout << "Enter values to push: ";
    for(int i = 0; i < sz; i++){
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

    int NewVal, idx;
    cout << "Enter value and index to add "<<endl;
    cin >> NewVal >> idx;
    ans = Add(ans,NewVal,idx);
    cout << "After adding a number at "<< idx << "th index"<<endl;
    print(ans);
}