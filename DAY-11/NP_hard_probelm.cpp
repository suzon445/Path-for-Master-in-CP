#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const int N = 1e5 + 2;

vector<int> adj[N];       // Adjacency list of the graph
vector<int> vc[2];      // Two sets: vc[0] and vc[1], for the two partitions
int color[N];            // mark[i] = 0 (unvisited), 2 or 1 (color/group)



bool dfs(int v, int c = 2){
    color[v] = c;
	vc[c - 1].push_back(v);
	for(int u : adj[v])
	{
		if(!color[u] && dfs(u, 3 - c))
				return 1;
		if(color[u] != 3 - c)
			return 1;
	}
	return 0;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,m; 
  cin >> n >> m;
  
  // Read the edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u); // since the graph is undirected
    }
   
    for(int i = 0; i < n; i++)
    if(!color[i])
    {
        if(adj[i].empty())
            continue;
        if(dfs(i))
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i = 0; i < 2; i++)
    {
    cout << vc[i].size() << endl;
    for(int v : vc[i])
        cout << v + 1 << " ";
    cout << endl;
    }



  return 0;
}