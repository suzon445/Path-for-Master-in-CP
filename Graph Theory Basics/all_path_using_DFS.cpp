#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<list<int>> graph;
int v;       // no of vertices
unordered_set<int> visited;
//stored all path
vector<vector<int>> result;

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr,int end,vector<int> &path){
    if(curr == end){
        // add current node
        path.push_back(curr);
        // this one path that will store result
        result.push_back(path);
        // remove last node from current path
        path.pop_back();
        return;
    }
    visited.insert(curr);
    //include node in current path
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour,end,path);
            
        }      
    }
    //not find path that remove current node that visited
    path.pop_back();
    // remove that node because of further visit
    visited.erase(curr);
    return;
}

void all_path(int src,int dest){
    vector<int> v;
    dfs(src,dest,v);
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
    all_path(x, y);
    for(auto path : result){
        for(auto ans : path){
            cout << ans << " ";
        }
        cout << endl;
    }
  
  return 0;
}