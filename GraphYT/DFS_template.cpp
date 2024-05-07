#include <bits/stdc++.h>
using namespace std; 
vector<vector<int>> graph;
vector<int> parent;

void dfs(int vertex, int parent =- 1){
    // Take action on the vertex after entering the vertex

    for(int child: graph[vertex]){
        if(child == parent) continue;
        // Take Action on child before entering the child node
        dfs(child, vertex);
        // Take Action on child after leaving the child node
    }

    // Take Actio on vertex before leaving the vertex
}

int main(){
    int v;
    cin >> v;

    graph.resize(v+1);
    parent.resize(v+1);

    for(int i = 0; i < v - 1; i++){
        int a, b;
        cin >> a >>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);
}