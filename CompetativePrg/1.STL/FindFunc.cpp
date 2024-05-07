#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    int arr[] = {5, 10, 9, 8, 9, 100};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;
    auto it = find(arr, arr + n, key);
    int idx = it - arr;
    if(idx == n) cout << "Not Presrent: -1" <<"\n";
    else cout << "Index: "<<idx;
    
}