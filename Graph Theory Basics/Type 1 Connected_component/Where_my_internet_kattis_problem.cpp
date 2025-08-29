#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int n,m;

vector<vector<int>> adj;
unordered_set<int> vis;

void dfs(int node){
    vis.insert(node);
    for(auto el : adj[node]){
        if(!vis.count(el)) dfs(el);
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n >> m;
  adj.resize(n,vector<int>());
  for(int i = 0; i < m; i++){
    int a, b;
    cin >> a >> b;
    a--, b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  dfs(0);
  bool ok = true;
  for(int i = 0; i < n; i++){
    if(!vis.count(i)){
        cout << i + 1 << endl;
        ok  = false;
    }
  }
  if(ok){
    cout << "Connected" << endl;
  }
  return 0;
}