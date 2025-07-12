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

void display(){
    //1_base index
    for(int i = 1; i < graph.size(); i++){
        cout << i <<"-->";
        for(auto el : graph[i]){
            cout  << el << " ";
        }
        cout << '\n';
    }
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
    display();
  
  return 0;
}