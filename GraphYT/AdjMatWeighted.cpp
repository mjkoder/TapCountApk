#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, e; 
    cin >> v >> e;
    vector<vector<int>> graph(v+1, vector<int>(e+1, 0));

    //InputEdges (Bidirectional & Weighted Graph)
    for(int i = 0; i < e; i++){
        int a, b, w;
        cin >> a >> b >>;

        graph[a][b] = w;
        graph[b][a] = w;
    }

} 