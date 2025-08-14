#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n,vector<int> (m));
    int mx = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            if(mx < v[i][j]){
                mx = v[i][j];
                cnt = 1;
            }
            else if(v[i][j] == mx) cnt++;
        }
    }
    vector<int> r(n), c(m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mx == v[i][j]){
                r[i]++;
                c[j]++;
            }
        }
    }
    int ok = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( r[i] + c[j] - (mx == v[i][j]) == cnt){
                ok = 1;
            }
        }
    }
    cout << mx-ok << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}