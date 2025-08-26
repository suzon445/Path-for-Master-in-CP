#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<vector<int>> graph;

  int v; cin >> v;
  int edge; cin >> edge;

  queue<int> q;
  vector<bool> visited(n);
  vector<int> d(n), p(n);

  int s;
  cin >> s;
  q.push(s);
  visited[s] = true;
  p[s] = -1;
  while(!q.empty()){
    int cur = q.front();
    q.pop();
    for(auto neighbour : graph[cur]){
        if(not visited[neighbour]){
            q.push(neighbour);
            visited[neighbour] = true;
            d[neighbour]  = d[cur] + 1;
            p[neighbour] = cur;
        }
    }
  }
  return 0;
}