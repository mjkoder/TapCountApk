#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;
vector<int> sum, val;
void dfs(int vertex, int par=-1){
    //Action Taken after entering the vertex
    sum[vertex] += val[vertex]; // ADD PROPER INDEX VALUE AS GIVEN IN QUESTION
    for(int child: graph[vertex]){
        if(child = par) continue;

        //Action Taken before entering child

        dfs(child, vertex);
        
        //Action Taken before leaving child
        sum[vertex] += sum[child];
    }   
    //Action taken before leaving the vertex
}
int main(){
    int v;
    cin >> v;

    graph.resize(v+1);<<<
    val.assign(v+1, -1);
    sum.assign(v+1, 0);
    for(int i = 1; i < v; i++){
        int a, b, wt;
        cin >> a >> b >> wt;

        val[i] = wt;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    long long ans = 0;
    for(int i = 2; i <= v; i++){ // WE WILL BREAK EACH EDGE AND CHECK
        int part1 = sum[i];
        int part2 = sum[1] - sum[i];
        ans = max(ans, part1 * part2);
    }

    cout << ans;
}