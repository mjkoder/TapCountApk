// Return a vector which strores the previous greatest element
// eg-
// vec = {1, 8, 3, 5, 7, 2, 9}
// ans = {-1, -1, 8, 8, 8, 7, -1}
#include <iostream>
#include <stack>
using namespace std;

void PrevGreatest(int arr[], int n){
    int ans[n];
    stack<int> st;
    ans[0] = -1;
    st.push(arr[0]);
    for(int i = 1; i < n; i++){
        //pop
        while(!st.empty() && st.top() <= arr[i]) st.pop();

        //answer
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();

        //push
        st.push(arr[i]);
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    return;
}
void NextGreatest(int arr[], int n){
    int ans[n];
    ans[n-1] = -1;
    stack<int> st;
    st.push(arr[n-1]);
    int i = n-2;
    while(i >= 0){
        //Pop
        while(!st.empty() && arr[i] >= st.top()) st.pop();
        //Ans
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        //Push
        st.push(arr[i]);
        i--;
    }
    for(int j = 0; j < n; j++) cout << ans[j] << " ";
}
int main(){
    cout << "Enter the size of vector "<<endl;
    int n;
    cin >> n;
    int arr [n];
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    PrevGreatest(arr,n);
}