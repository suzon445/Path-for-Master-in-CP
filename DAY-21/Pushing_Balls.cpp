#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = n - 1; i >= 0; i--){
        for(int j = m - 1; j >= 0; j--){
            bool ok1 = true, ok2 = true;
            if(grid[i][j] == '1'){
                for(int k = j-1; k >= 0; k--){
                    if(grid[i][k] != '1'){
                        ok1 = false;
                    }
                }
                for(int k = i-1; k >= 0; k--){
                    if(grid[k][j] != '1'){
                        ok2 = false;
                    }
                }
                if(!(ok1 or ok2)){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}