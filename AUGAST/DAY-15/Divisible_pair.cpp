#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, x, y;
    cin >> n >> x >> y;

    map<pair<int,int>,int> cnt;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        ans += cnt[{(x - a % x) % x, a % y}];
        cnt[{a % x, a % y}]++;
    }
    cout << ans << endl;
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