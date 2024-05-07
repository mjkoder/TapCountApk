#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> graph;
int vertices, edges;

void addEdges(int a, int b){
    graph[a].push_back(b);
    graph[b].push_back(a);
}
void removeEdge(int a, int b){
    graph[a].erase(find(graph[a].begin(), graph[a].end(), b));
    graph[b].erase(find(graph[b].begin(), graph[b].end(), a));
    return;
}
bool isEdge(int a, int b){
    return find(graph[a].begin(), graph[a].end(), b);
}

void printGraph(){

    for(int i = 0; i < graph.size(); i++){
        for(int j = 1; j < graph[i].size(); i++){
            cout << graph[i][0] << " => " << graph[i][j] <<endl;
        }
        cout << endl;
    }
    cout << endl;
    
}
int main(){
    
    cout << "Enter no of vertices & edges:";
    cin >> vertices >> edges;

    for(int i = 0; i < edges; i++){
        int a, b;
        cin >> a >> b;
        addEdges(a, b);
    }
    printGraph();
}