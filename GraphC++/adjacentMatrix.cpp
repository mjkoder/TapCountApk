#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// unweighted graph
int adjMat[1000][1000];
int edges, vertices;

void addEdge(int a, int b){
    adjMat[a][b] = 1;
    adjMat[b][a] = 1;
}

bool isEdge(int a, int b){
    return adjMat[a][b] == 1;
}

void removeEdge(int a, int b){
    adjMat[a][b] = 0;
    adjMat[b][a] = 0;
}

void printMat(){
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            if(adjMat[i][j] == 1) cout << i << "=>" << j << ", ";
        }
        cout << endl;
    }
}
int main(){
    cin >> vertices >> edges;
    for(int i = 0 ; i < edges; i++){
        int a, b;
        cin >> a >> b;
        addEdge(a, b);
    }
    printMat();
}