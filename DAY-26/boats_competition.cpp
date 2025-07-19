#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n; cin >> n;
    vector<ll> cnt(n + 1);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cnt[x]++;
    }
    ll ans = 0;
    for(ll s = 2; s <= 2 * n; s++){
        ll cur = 0;
        for(ll i = 1; i < (1 + s)/2; i++){
            if( s - i > n) continue;
            cur += min(cnt[i],cnt[s-i]);
        }
        if(s % 2 == 0) cur += cnt[s/2]/2;
        ans = max(ans,cur);
    }
    cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}