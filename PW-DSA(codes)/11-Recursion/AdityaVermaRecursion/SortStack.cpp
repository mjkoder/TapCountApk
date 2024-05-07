#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void Insert(vector<int>& v, int num){

    if(v.size() == 0 || v[v.size() - 1] <= num){
        v.emplace_back(num);
        return;
    }

    int last = v[v.size() - 1];
    v.pop_back();
    
    Insert(v, num);
    v.emplace_back(last);
}

void Sort(vector<int>& v, int n){

    //Base Case
    if(n == 1) return;

    //Hypothesis
    int hold = v[n-1];
    v.pop_back();
    Sort(v, n -1);

    //Induction
    Insert(v, hold);
    
}
int main(){
    int n;
    cout << "Enter size of array: "<<endl;
    cin>>n;
    stack<int> st;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        st.push(num);
    }

    Sort(st, n);
    cout << "Print Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
