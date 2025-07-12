#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<list<int>> graph;
int v;       // no of vertices
unordered_set<int> visited;

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr,int end){
    if(curr == end) return true;
    visited.insert(curr);
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            bool result = dfs(neighbour,end);
            if(result) return true;
        }      
    }
    return false;
}

bool any_path(int src,int dest){
    return dfs(src,dest);
}

int32_t main() {
  
    cin >> v;
    graph.resize(v + 1, list<int>());
    visited.clear();
    int edge;
    cin >> edge;
    while(edge--){
        int src, dest;
        cin >> src >> dest ;
        add_edge(src, dest);
    }
    int x, y;
    cin >> x >> y;
    cout << any_path(x, y) << endl;
  
  return 0;
}