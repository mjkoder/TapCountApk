// Stock Span Problem
// Return an array which says the maximum price of stock for
// last few days
// eg-
// stock = [80, 100, 120, 90,50,80, 110]
// ans = [1, 2, 3, 1, 1, 2, 4]

#include <iostream>
#include <stack>
using namespace std;

void PrevGreatest(int arr[], int n){
    int ans[n];
    stack<int> st;
    ans[0] = 1;
    st.push(arr[0]);
    for(int i = 1; i < n; i++){
        int count = 1;
        stack<int> temp = st;
        //pop
        while(!temp.empty() && temp.top() <= arr[i]){
            count++;
            temp.pop();
        }

        //answer
        ans[i] = count;

        //push
        st.push(arr[i]);
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    return;
}
int main(){
    cout << "Enter the no of days: "<<endl;
    int n;
    cin >> n;
    cout << "Enter the price of stock on each day: "<<endl;
    int arr [n];
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    PrevGreatest(arr,n);
}