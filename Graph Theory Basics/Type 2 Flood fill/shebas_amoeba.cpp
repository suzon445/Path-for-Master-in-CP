#include<bits/stdc++.h>
using namespace std;

vector<string> grid;
vector<vector<bool>> vis;
int n, m;

int dx[] = {1 , -1 , 0 , 0 , 1 , 1, - 1, -1};
int dy[] = {0, 0, 1 , -1 , 1 , -1 , 1, -1};

void dfs(int x, int y){
    vis[x][y] = true;
    for(int dir = 0; dir < 8; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m){
            if(!vis[nx][ny] && grid[nx][ny] == '#')
               dfs(nx,ny);
        }
    }
}




int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); 

  
  cin >> n >> m;

  grid.resize(n);
  vis.assign(n, vector<bool> (m,false));
  for(int i = 0; i < n; i++){
    cin >> grid[i];
  }

  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(!vis[i][j] and grid[i][j] == '#'){
            dfs(i, j);
            ans++;
        }
    }
  }
  cout << ans << endl;
 
  return 0;
}