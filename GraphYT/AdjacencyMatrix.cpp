#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, e; 
    cin >> v >> e;
    cout << "Hii \n";
    vector<vector<int>> graph(v+1, vector<int>(e+1, 0));

    //InputEdges (Bidirectional & Un-weighted Graph)
    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;

        graph[a][b] = 1;
        graph[b][a] = 1;
    }

} 