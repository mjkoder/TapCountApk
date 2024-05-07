#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, e; 
    cin >> v >> e;
    vector<vector<int>> graph(v+1);

    //InputEdges (Bidirectional & Un-weighted Graph)
    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 0 ; i < v; i++){
        cout << i <<"=>";
        for(int j = 0; j < graph[i].size(); j++){
            cout << graph[i][j] << ",";
        }
        cout <<"\n";
    }
} 