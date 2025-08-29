#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> pre(n + 1);
    for(int i = 1; i <= n; i++){
        char c; cin >> c;
        pre[i] = c - '0';
    }
    for(int i = 1; i <= n; i++){
        pre[i] += pre[i-1];
    }

    map<int, ll> sum_dist;
    for(int i = 0; i <= n; i++){
        sum_dist[pre[i] - i]++;
    }

    ll ans = 0;
    for(auto x : sum_dist){
        ans += x.second * (x.second - 1) / 2;
    }
    cout << ans  << endl;
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