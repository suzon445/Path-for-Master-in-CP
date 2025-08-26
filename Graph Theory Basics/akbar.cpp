#include <bits/stdc++.h>
using namespace std;

int N, R, M;
vector<vector<int>> graph;
vector<int> covered_by; 

// BFS for one soldier
bool bfs(int start, int strength, int soldier_id) {
    queue<pair<int,int>> q;
    q.push({start, strength});

    if (covered_by[start] == -1) {
        covered_by[start] = soldier_id;
    } else if (covered_by[start] != soldier_id) {
        return false;
    }

    while (!q.empty()) {
        auto [city, dist] = q.front();
        q.pop();

        if (dist == 0) continue; 

        for (int nxt : graph[city]) {
            if (covered_by[nxt] == -1) {
                covered_by[nxt] = soldier_id;
                q.push({nxt, dist - 1});
            }
            else if (covered_by[nxt] != soldier_id) {
                return false; 
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        cin >> N >> R >> M;

        graph.assign(N + 1, {});
        for (int i = 0; i < R; i++) {
            int a, b;
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

       covered_by.assign(N + 1, -1);
       bool ok = true;

       vector<pair<int,int>> q(M);

       for(int i = 0; i < M; i++){
        int s, st;
        cin >> s >> st;
         q[i] = {s,st};
       }

       for(int i = 0; i < M && ok ; i++){
        if(!bfs(q[i].first, q[i].second, i)){
            ok = false;
            break;
        }
       }
        // Check if all cities are covered
        if (ok) {
            for (int i = 1; i <= N; i++) {
                if (covered_by[i] == -1) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
