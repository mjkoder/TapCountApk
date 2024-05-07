#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<bool> vis;
int cnt = 0;

void dfs(int vertx, int par) { // vertex and parentVertex
    if(vis[vertx]){
        if(vertx != par) cnt++; // Check if the visited vertex is not the parent
        return;
    }
    vis[vertx] = true;
    //
    for(int child : graph[vertx]){
        if(vis[child] && child == par) continue; // Check whether we are just going back to where we came

        dfs(child, vertx);
        //
    }
    //
}

int main(){
    int v, e; 
    cin >> v >> e;

    graph.resize(v + 1); 
    vis.assign(v + 1, false);

    for(int i = 1; i <= e; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout << "Total Cycles: " << cnt;
}
