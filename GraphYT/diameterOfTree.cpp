

/*HOW - TO - FIND - DIAMETER - OF - A - TREE*/
/*

1. Find the maximum depth of the tree by passing any vertex of the tree. It's not necessarily the root vertex.
2. From those find maxDepthNode
3. Then again do dfs through the maxDepthNode
4. Again iterate and you will get the maxDia
5. Which is the required dia of the tree

TC = O(V+E)

*/

#include <bits/stdc++.h>
using namespace std; 
vector<vector<int>> graph;
vector<int> Depth;

void dfs(int vertex, int parent = -1){
    // if(visited[vertex]) return;
    for(int child : graph[vertex]){
        
        if(child == parent) continue;
        //Action taken before entering child => We will get Depth 
        Depth[child] = Depth[vertex] + 1;
        dfs(child, vertex);
        //Action taken after exiting child => We will get Height
    }
}
int main(){
    int v, e;
    cin >> v >> e;

    graph.resize(v+1);
    Depth.assign(v+1, 0);

    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, 0); //STEP1
    int maxDepth = 0, maxDepthNode;
    for(int i = 1; i <= v; i++){ //STEP2
        if(maxDepth < Depth[i]){
            maxDepth = Depth[i];
            maxDepthNode = i;
        }
        Depth[i] = 0;
    } //WE GOT maxDepthNode

    dfs(maxDepthNode); //STEP3

    int maxDia = 0;
    for(int i = 1; i <= v; i++){ //STEP4
        maxDia = max(maxDia, Depth[i]);
    }

    cout << "Diameter of the tree: " << maxDia;

}

// Height of a Vertex/Node:: It's the maximum distance of that node from one LEAF node of its child nodes. It's computed from Bottom to Top
// Depth of a Vertex/Node:: It's the distance from the main base node distance. => It's computed Top to Bottom