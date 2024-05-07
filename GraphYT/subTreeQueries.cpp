#include <bits/stdc++.h>
using namespace std; 
vector<vector<int>> graph;
vector<int> evenSum; // Stores sum of all even vertices under that VERTICES
vector<int> subTreeSum; // Stores the sum of all the child vertices and that VERTICES

// SUBTREE QUERRIES L.8
void dfs(int vertex, int parent){
    // if(subTreeSum[vertex] != 0) return;

    subTreeSum[vertex] += vertex;
    if(vertex % 2 == 0) evenSum[vertex] = vertex;
    for(int child : graph[vertex]){
        
        if(child == parent) continue;
        //Action taken before entering child 
        
        dfs(child, vertex);
        //Action taken after exiting child
        subTreeSum[vertex] += subTreeSum[child]; 
        evenSum[vertex] += evenSum[child];
        
    }
}
int main(){
    int v, e;
    cin >> v >> e;

    graph.resize(v+1);
    evenSum.assign(v+1, 0);
    subTreeSum.assign(v+1, 0);

    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, 0);

    for(int i = 1; i <= v; i++){
        cout << i << " ka Normal Sum " << subTreeSum[i] <<"\n";
        cout << i << " ka Even Sum " << evenSum[i] <<"\n";
    }
    return 0;
}
