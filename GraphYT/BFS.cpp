#include <bits/stdc++.h>
using namespace std;
/*
1. We need a queue to store the order/levels + Visited Array to store visits
2. Print node when popping the front element of the queue and simultaneously add all the child nodes belongs to that node
3. We will run the loop till queue gets empty

*/
vector<vector<int>> graph;
vector<bool> visited;
vector<int> level;

void bfs(int vertex){
    queue<int> q; 
    q.push(vertex);
    visited[vertex] = true;

    while(!q.empty()){
        int front = q.front();
        cout << front << "=>";
        q.pop();
        for(int child: graph[front]){
            if(visited[child]) continue;
            q.push(child);
            visited[child] = true;
            level[child] = level[front] + 1;
        }
    }
}
int main(){
    int v;
    cin >> v;
    graph.resize(v+1);
    visited.assign(v+1, false);
    level.assign(v+1, 0);

    for(int i = 1; i < v; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs(1);
}