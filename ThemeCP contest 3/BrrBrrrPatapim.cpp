#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int grid[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    vector<int> ans(n+n);
    int j = 1;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ans[j] = grid[i][0];
        sum += ans[j];
        j++;

    }
    for(int i = 1; i < n; i++){
        ans[j] = grid[n-1][i];
        sum += ans[j];
        j++;
    }
    ll num = n + n;
    ll total_sum = num * (num + 1) / 2;
    cout << total_sum - sum <<' ';
    for(int i = 1; i < n + n; i++){
        cout << ans[i] << " \n"[i + 1 == n + n];
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}