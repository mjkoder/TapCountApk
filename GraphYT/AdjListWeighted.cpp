#include <iostream>
#include <vector>
using namespace std;

int main(){
    int v, e;
    cin >> v >> e;

    vector<vector<pair<int, int>>> graph(v+1);

    //Input with weighted & Unidirectional
    for(int i = 0; i < e; i++){
        int a, b, w;
        cin >> a >> b >> w;

        pair<int, int> hold;
        hold.first = b;
        hold.second = w;

        graph[a].push_back(hold);
    }

    for(int i = 0; i <= e; i++){
        cout << i << "=>";
        for(int j = 0; j < graph[i].size(); j++){
            cout << "(" << graph[i][j].first << "," <<graph[i][j].second <<"),";
        }
        cout <<"\n";
    }
}