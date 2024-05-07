#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    int arr[] = {5, 10, 9, 8, 9, 100};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n);

    int key;
    cin >> key;
    bool present= binary_search(arr, arr + n, key);
    if(!present) cout << "NO" <<"\n";
    else cout << "YES";
    
}