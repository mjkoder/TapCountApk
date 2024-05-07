#include <bits/stdc++.h>
using namespace std; 
vector<vector<int>> graph;
vector<bool> visited;
vector<int> Depth, Height;
void dfs(int vertex, int parent){
    // if(visited[vertex]) return;
    for(int child : graph[vertex]){
        
        if(child == parent) continue;
        //Action taken before entering child => We will get Depth 
        Depth[child] = Depth[vertex] + 1;
        dfs(child, vertex);
        //Action taken after exiting child => We will get Height
        Height[vertex] = max(Height[vertex], Height[child] + 1); // Maximum distance from any leaf nodes of that vertex child
    }
}
int main(){
    int v, e;
    cin >> v >> e;

    graph.resize(v+1);
    visited.assign(v+1, false);
    Depth.assign(v+1, 0);
    Height.assign(v+1, 0);

    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, 0); //Parent passed as 0 => Its just a random value, as base node has no parent.
    for(int i = 1; i <= v; i++){
        cout << "Height of " << i << " : " << Height[i] << "\n";
        cout << "Depth of " << i << " : " << Depth[i] << "\n \n";
    }

}

// Height of a Vertex/Node:: It's the maximum distance of that node from one LEAF node of its child nodes. It's computed from Bottom to Top
// Depth of a Vertex/Node:: It's the distance from the main base node distance. => It's computed Top to Bottom