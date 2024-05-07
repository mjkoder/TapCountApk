// return an array of same size with next greatest element
// eg-
// vec = {1, 8, 3, 5, 7, 2, 9}
// ans = {8, 9, 5, 7, 9, 9, -1}
#include <iostream>
#include <stack>
using namespace std;

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
    NextGreatest(arr,n);
}