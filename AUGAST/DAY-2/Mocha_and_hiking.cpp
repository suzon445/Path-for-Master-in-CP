#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

vector<int> adj[N], topo;
bool visited[N];

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) dfs(v);
    }
    topo.push_back(u);
}

void solve() {
    int n;
    cin >> n;

    // Clear for each test case
    for (int i = 1; i <= n + 1; ++i) {
        adj[i].clear();
        visited[i] = false;
    }

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // Type-1 edges
    for (int i = 1; i < n; ++i) {
        adj[i].push_back(i + 1);
    }

    // Type-2 edges
    for (int i = 1; i <= n; ++i) {
        if (a[i] == 0) {
            adj[i].push_back(n + 1);
        } else {
            adj[n + 1].push_back(i);
        }
    }

    topo.clear();

    // Perform DFS from all unvisited nodes
    for (int i = 1; i <= n + 1; ++i) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    reverse(topo.begin(), topo.end());

    // Output the topological order
    for (int i = 0; i < topo.size(); ++i) {
        cout << topo[i] << " \n"[i == topo.size() - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
