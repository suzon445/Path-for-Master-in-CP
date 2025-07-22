#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll gets(ll n){
    return n * (n + 1) / 2;
}

void solve(){
    ll x; cin >> x;
    int ans = 0;
    for(int i = 1; gets((1LL << i) - 1) <= x ; i++){
        ans++;
        x -= gets((1LL << i) - 1);
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