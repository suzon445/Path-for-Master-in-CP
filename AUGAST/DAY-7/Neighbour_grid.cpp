#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int nei = 0;
            if(i - 1 >= 0) nei++;
            if (i + 1 < n) nei++;
            if(j - 1 >= 0) nei++;
            if(j + 1 < m) nei++;
            if(nei < v[i][j]){
                cout << "NO\n";
                return;
            }
            else{
                v[i][j] = nei;
            }
        }
    }
    cout << "YES\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << v[i][j] <<' ';
        }
        cout << endl;
    }

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}