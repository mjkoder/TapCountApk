
/*HOW - TO - FIND - LOWEST - COMMON ANCESTOR - OF - ANY - TWO - NODES*/
/*

1. Store paths of both the nodes from the rootNode using dfs
2. traverse forward using a loop and the first node that comes common is the LCA

TC = O(V+E)

HOW - TO - STORE - PATH ?
1. Use a vector to store the parent of all the nodes
2. Parent(Node) and Parent(parent of node). Till root

*/

#include <bits/stdc++.h>
using namespace std; 
vector<vector<int>> graph;
vector<int> parent;


void dfs(int vertex, int par = -1){ // 1.PARENT STORING
    // Action taken after entering vertex
    parent[vertex] = par;

    for(int child : graph[vertex]){
        if(child == par) continue;

        // Action taken before entering child 

        dfs(child, vertex);

        // Action taken after exiting child
    }
    // Action taken before leaving vertex
}

vector<int> path(int vertex){ //2. GIVE THE PATH
    vector<int> ans;
    while(vertex != -1){ // -1 BCZ WE HAVE ASSIGNED -1 AS PARENT OF ROOT NODE
        ans.push_back(vertex);
        vertex = parent[vertex];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int v;
    cin >> v;

    graph.resize(v+1);
    parent.assign(v+1, -1);

    for(int i = 0; i < v-1; i++){
        int a, b;
        cin >> a >>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);

    int v1, v2;
    cout << "Enter two vertex whoose LCA will be computed: ";
    cin >> v1 >> v2;
    vector<int> path1, path2;
    path1 = path(v1);
    path2 = path(v2);

    int i = 0, sz = min(path1.size(), path2.size());
    int lca = -1;
    for(int i = 0 ; i  < sz; i++){
        if(path1[i] == path2[i]) lca = path1[i];
        else break;
    }
    cout << "Lowest Common Ancestor is " << lca;
}