#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n,vector<int> (m));
    set<int> row,col;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            if(v[i][j] == 1){
                row.insert(i);
                col.insert(j);
            }
            
        }
    }
    int parity = min(n-row.size(), m-col.size());
    if(parity & 1){
        cout << "Ashish\n";
    }
    else cout << "Vivek\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}