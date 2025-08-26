#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<list<int>> graph;
int v;       // no of vertices

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node, unordered_set<int> &visited){
    visited.insert(node);
    for(auto n : graph[node]){
        if(not visited.count(n)){
            dfs(n,visited);
        }
    }
}

int connected_component(){
    unordered_set<int> visited;
    int ans = 0;
    for(int i = 0;  i < v; i++){
        if(not visited.count(i)){
            ans++;
            dfs(i,visited);
        }
    }
    return ans;
}

int32_t main() {
  
    cin >> v;
    graph.resize(v + 1, list<int>());
    int edge;
    cin >> edge;
    while(edge--){
        int src, dest;
        cin >> src >> dest ;
        add_edge(src, dest);
    }
    cout << connected_component() << endl;
  
  return 0;
}